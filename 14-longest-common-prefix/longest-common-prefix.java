class Solution {

    public static String solve(String[] strs){
        Arrays.sort(strs);
        StringBuilder ans = new StringBuilder("");
        String compareString = strs[0];
        // int j = 0;
        for(int i=0; i<compareString.length(); i++){
            for(int k=1; k<strs.length; k++){
                if(compareString.charAt(i) != strs[k].charAt(i)){
                    return ans.toString();
                }
            }
                ans.append(compareString.charAt(i));
                

        }
        return ans.toString();

    }

    public String longestCommonPrefix(String[] strs) {
        return solve(strs);
    }
}