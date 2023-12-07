class Solution {
public:
    string largestOddNumber(string num) {
        string s="";
        int j;
        for(int i=num.length()-1;i>=0;i--){
            if(num[i]%2!=0){
                j = i;
                break;
            }
        }
        for(int i=0;i<=j;i++){
            s+=num[i];
        }
        return s;
    }
};