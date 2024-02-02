class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string s = "123456789";
        vector<int> ans,nums;
        for(int i=0;i<s.size();i++){
            string a = "";
            for(int j=i;j<s.size();j++){
                a+=s[j];
                int n = stoi(a);
                if(low <= n && n<=high){
                    ans.push_back(n);
                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};