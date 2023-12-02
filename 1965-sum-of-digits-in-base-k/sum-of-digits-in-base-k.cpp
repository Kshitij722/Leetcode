class Solution {
public:
    int sumBase(int n, int k) {
        int ans = 0;
        while(n!=0){
            int i = n%k;
            int j = n/k;
            ans += i;
            n = j;
        }
        return ans;
    }
};