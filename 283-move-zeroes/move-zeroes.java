class Solution {

    private static void solve(int[] nums){
        
        int j = 0;
        for(int i=0;i<nums.length;i++){
            if(nums[i] != 0){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;

                j++;

            }
        }
    }

    public void moveZeroes(int[] nums) {
        if(nums.length == 1) return;
        solve(nums);
    }
}