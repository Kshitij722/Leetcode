class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int> a;
        for(auto i:arr){
            a[i]++;
        }
        vector<pair<int, int>> vec(a.begin(), a.end());

        sort(vec.begin(), vec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second < b.second; 
    });
        int n = a.size();

        int c=0;
        for(auto i:vec){
            cout<<i.first<<":"<<i.second;
            cout<<",";
        }
        for(auto i:vec){
            c+=i.second;
            if(c==k){
                return n - 1;
            }
            else if(c<k){
                n-=1;
            }
            else{
                break;
            }
        }
        return n;
    }
};