class Solution {

    private static int solve(int[] nums){
        int max_ones = 0;
        int count = 0;
        for(int i = 0; i < nums.length; ++i){
            if(nums[i] == 1){
                count++;
            }
            else{
                max_ones = Math.max(max_ones, count);
            
                count=0;
            }
        }
        max_ones = Math.max(max_ones, count);
        return max_ones;
    }

    public int findMaxConsecutiveOnes(int[] nums) {
        return solve(nums);
    }
}