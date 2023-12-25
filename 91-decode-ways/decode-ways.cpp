class Solution {
public:
    int numDecodings(string s) {
        vector<int> dp(s.size()+1);
        dp[0]=1;
        if(s[0]=='0') dp[1]=0;
        else dp[1]=1;
        for(int i=2;i<=s.size();i++){
            int a,b;
            if(s[i-1]=='0') a=0;
            else a = dp[i-1];
            if(stoi(s.substr(i-2,2))<=26 && stoi(s.substr(i-2,2))>0 && s[i-2]!='0') b = dp[i-2];
            else b=0;
            dp[i] = a+b;
        }
        return dp[s.size()];
    }
};