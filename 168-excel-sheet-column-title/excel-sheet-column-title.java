class Solution {

    public static String solve(int colNumber){
        int rem = 0;
        int divider = 0;
        StringBuilder ans = new StringBuilder();
        int num = colNumber;
        while(num > 0){
            rem = num % 26;
            divider = num/26;
            if(rem == 0){
                rem = 26;
                divider -= 1;
            }
            ans.append((char)(rem + 'A' - 1));
            num = divider;
        }

        return ans.reverse().toString();
    }

    public String convertToTitle(int columnNumber) {
        return solve(columnNumber);
    }
}