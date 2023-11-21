class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> a;
        int n = arr.size();
        int c = 0;
        for(int i=n-1;i>=0;i--){
            c = max(c,arr[i]);
            a.push_back(c);
        }
        if(a.size()>0) a.pop_back();
        reverse(a.begin(),a.end());
        a.push_back(-1);

        return a;
    }
};