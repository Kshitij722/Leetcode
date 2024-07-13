class Solution {

    public static boolean isPalindrome(String s1){
        int last = s1.length()-1;
        for(int i=0;i<s1.length()/2;i++){
            if(s1.charAt(i)!=s1.charAt(last)) return false;
            last--;
        }
        return true;
    }

    public static void Partitioning(String s, int idx, List<List<String>> ans, List<String> str){

        if(idx==s.length()){
            ans.add(new ArrayList<>(str));
            return;
        }

        for(int i=idx;i<s.length();i++){
            String substr = s.substring(idx,i+1);
            if(isPalindrome(substr)){
                str.add(substr);
                Partitioning(s,i+1,ans,str);
                str.remove(str.size()-1);
            }
        }
    }

    public List<List<String>> partition(String s) {
        List<List<String>> ans = new ArrayList<List<String>>();
        List<String> str = new ArrayList<>();
        Partitioning(s,0,ans,str);
        return ans;
    }
}