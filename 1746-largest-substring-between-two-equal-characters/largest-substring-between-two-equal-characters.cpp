class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int n = s.length();
        int ans = -1;
        vector<int> a(26,-1);
        for(int i=0;i<n;i++){
            if(a[s[i]-'a']==-1){
                a[s[i] - 'a'] = i;
            }
            else{
                ans = max(ans,i - a[s[i]-'a'] - 1);
            }
        }
        return ans;
    }
};