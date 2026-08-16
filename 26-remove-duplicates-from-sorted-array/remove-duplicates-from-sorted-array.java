class Solution {

    private static int solve(int[] nums){
        int i = 0;
        int j = 0;

        for(i=0;i<nums.length-1;i++){
            if(nums[i] != nums[i+1]){
                nums[j+1] = nums[i+1];
                j++;
            }
        }

        return j+1;
    }

    public int removeDuplicates(int[] nums) {
        return solve(nums);
    }
}