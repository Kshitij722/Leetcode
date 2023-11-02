class Solution {
public:
    bool isAnagram(string s, string t){
        if(t.length()!= s.length()) return false;
        sort(t.begin(),t.end());
        sort(s.begin(),s.end());
        for(int i=0;i<s.length();i++){
            if(s[i] != t[i]) return false;
        }
        return true;
    }
};