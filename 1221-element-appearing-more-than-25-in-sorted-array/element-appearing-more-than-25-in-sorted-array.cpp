class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        int ans;
        map<int,int> a;
        for(auto i:arr) a[i]++;
        for(auto i:a){
            if(i.second > n/4){
                ans = i.first;
                break;
            } 
        }
        return ans;
    }
};