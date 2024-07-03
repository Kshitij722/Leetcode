class Solution {
    public String reverseWords(String s) {
        s = s.trim();
        String[] ans = s.split(" ");
        int len = ans.length;
        
        String rev = "";
        for(int i=len-1;i>0;i--){
            if(ans[i]!="")
            {
            rev+=ans[i] + " ";
            }
        }
        rev+=ans[0];
        return rev;
    }
}