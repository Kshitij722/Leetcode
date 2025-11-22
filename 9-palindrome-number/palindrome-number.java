class Solution {

    public static boolean solve(int x){
        String number = Integer.toString(x);
        // System.out.println(number);
        int last = number.length();
        // System.out.println(last);
        int j = last-1;
        int i = 0;
        while(i<j){
            if(number.charAt(i) != number.charAt(j)){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    public boolean isPalindrome(int x) {
        return solve(x);    
    }
}