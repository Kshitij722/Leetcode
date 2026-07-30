class Solution {

    private static int solve(String word){

        int ans = 0;
        int n = word.length();
        if(n > 8){
            ans = 8;
            for(int i=9;i<=n;i++){
                if(i <= 16){
                    ans += 2;
                }
                else if(i <= 24){
                    ans += 3;
                }
                else{
                    ans += 4;
                }
            }

            return ans;
        }
        return n;
    }

    public int minimumPushes(String word) {
        return solve(word);
    }
}