class Solution {


    public static Long digitSum(int n){
        long sumOfDigit = 0;
        while(n > 0){
            sumOfDigit += n%10;
            n /= 10;
        }

        return sumOfDigit;
    }

    public static Long squareSum(int n){
        long sumOfSqDigit = 0;
        while(n > 0){
            sumOfSqDigit += (n%10) * (n%10);
            n /= 10;
        }
        return sumOfSqDigit;
    }

    public boolean checkGoodInteger(int n) {
        long sum1 = digitSum(n);
        long sum2 = squareSum(n);

        if(sum2 - sum1 >= 50) return true;

        return false;
    }
}