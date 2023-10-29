class Solution {
public:
    int minChanges(string s) {
        int count = 0;
        int ans = 0;
        vector<int> a;
        // s1+=s[0];
        for(int i=0;i<s.length()-1;i++){
            if(s[i]==s[i+1]){
               count++;
            }
            else{
                a.push_back(count+1);
                count=0;
            }
        }
        a.push_back(count+1);
        for(auto i:a){
            cout<<i<<" ";
        }
        for(int i=0;i<a.size()-1;i++){
            if(a[i]%2!=0){
                if(a[i+1]%2!=0){
                    ans++;
                    i++;
                }
                else{
                    a[i+1] = a[i+1]-1;
                    ans++;
                }
            }
        }
        
        return ans;
    }
};