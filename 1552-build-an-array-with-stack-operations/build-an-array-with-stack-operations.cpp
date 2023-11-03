class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        stack<int> a;
        vector<string> b;
        int j = 0,i = 1;
        while(i<=n && j<target.size()){
            a.push(i);
            b.push_back("Push");
            if(i != target[j]){
                a.pop();
                b.push_back("Pop");
                j--;
            }
            j++;
            i++;
        }
        return b;
    }
};