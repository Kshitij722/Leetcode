class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n = pref.length();
        int count=0;
        for(auto i:words){
            if(i.substr(0,n) == pref) count++;
        }
        return count;
    }
};