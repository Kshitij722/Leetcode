class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> a;
        set<int> b;
        for(int i=0;i<arr.size();i++){
            a[arr[i]]++;
        }
        int count = 0;
        for(auto i :a){
            if(i.second == count){
                return false;
            }
            count = i.second;
            b.insert(count);
        }
        if(b.size()!=a.size()) return false;
        return true;
    }
};