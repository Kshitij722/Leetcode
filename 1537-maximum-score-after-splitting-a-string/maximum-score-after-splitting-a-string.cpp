class Solution {
public:
    int maxScore(string s) {
        int c=0;;
        for(int i=0;i<s.length();i++){
            if(s[i] == '1') c++;
        }
        int c1 = 0;
        int ans = 0;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]=='0') {
                c1++;
                
            }
            else{
                c--;
            }
            ans = max(ans,c1+c);

        }
        return ans;
    }
};