class Solution {
    public List<String> validStrings(int n) {
        List<String> ans = new ArrayList<>();

        if(n==1){
            ans.add("1");
            ans.add("0");
            return ans;
        }
        ans.add("01");
        ans.add("10");
        ans.add("11");

        for(int i=3;i<=n;i++){
            List<String> a = new ArrayList<>();
            for(var k:ans){
                if(k.charAt(k.length()-1) == '1'){
                    a.add(k+"1");
                    a.add(k+"0");
                }
                else{
                    a.add(k+"1");
                }
            }
            ans = a;
        }
        return ans;
    }
}