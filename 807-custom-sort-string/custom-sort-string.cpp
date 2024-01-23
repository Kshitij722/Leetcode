class Solution {
public:
    string customSortString(string order, string s) {
        map<char,int> a;
        for(auto i:s){
            a[i]++;
        }
        string ans = "";
        for(auto i:order){
            while(a[i]--){
                ans+=i;
            }
        }
        for(auto i:a){
            while(i.second > 0){
                i.second--;
                ans+=i.first;
            }
        }
        return ans;
    }
};