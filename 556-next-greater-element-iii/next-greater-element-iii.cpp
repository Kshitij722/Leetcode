class Solution {
public:
    int nextGreaterElement(int n) {
        string s = to_string(n);
        next_permutation(begin(s),end(s));
        long long a = stoll(s);
        if(a>INT_MAX || a<=n) return -1;
        return a;
    }
};