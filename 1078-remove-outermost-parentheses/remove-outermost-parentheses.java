class Solution {
    public String removeOuterParentheses(String s) {
        if(s.length()<=2) return "";
        StringBuilder newString = new StringBuilder();
        int open = 1;
        for(int i=1;i<s.length();i++){
            if(s.charAt(i) == '('){
                open++;
                if(open>1){
                    newString.append('(');
                }
            }
            else{
                if(open>1) newString.append(')');
                open--;
            }
        }
        return newString.toString();
    }
}