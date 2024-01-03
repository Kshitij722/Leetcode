class Solution {
public:
    int subtractProductAndSum(int n) {
        string s = to_string(n);
        int a = 1;
        int b = 0;
        for(int i=0;i<s.length();i++){
            a *= int(s[i] - '0');
            b += int(s[i] - '0');
            
        }
  
        return (a-b);
    }
};