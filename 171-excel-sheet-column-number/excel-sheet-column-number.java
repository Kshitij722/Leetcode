class Solution {

    public int solve(String col){
        if(col.length() == 1){
            return (col.charAt(0) - 'A' + 1);
        }
        int num = 1;
        int i = col.length() - 1;
        int ans = 0;
        while(i >= 0){
            ans += num * (col.charAt(i) - 'A' + 1);
            num *= 26;
            i--;
        }
        return ans;

    }

    public int titleToNumber(String columnTitle) {
        return solve(columnTitle);
    }
}