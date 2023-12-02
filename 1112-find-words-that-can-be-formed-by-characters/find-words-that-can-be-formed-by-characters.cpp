class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int> a;
        for(auto i:chars){
            a[i]++;
        }
        bool flag = true;
        string s = "";
        for(auto i:words){
            flag = true;
            unordered_map<char,int> b;
            for(auto j : i){
                b[j]++;
            }
            for(auto j:i){
                if(b[j]>a[j]) flag = false;
            }
            if(flag) s+=i;
        }
        return s.length();
    }
};