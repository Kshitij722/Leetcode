class Solution {

    private static int solve(int[] nums){
        Arrays.sort(nums);
        int n = nums.length;
        return (nums[n-1] + nums[n-2]) - nums[0];
    }

    public int maximizeExpressionOfThree(int[] nums) {
        return solve(nums);
    }
}