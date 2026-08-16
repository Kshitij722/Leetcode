class Solution {

    private static boolean solve(int[] nums){
        boolean isDipped = false;
        for(int i=0; i<nums.length-1; i++){
            if(nums[i] > nums[i+1]){
                if(!isDipped){
                    isDipped = true;
                }
                else{
                    return false;
                }
            }
        }
        if(nums[nums.length-1] > nums[0]){
            if(isDipped) return false;
        } 

        return true;
    }

    public boolean check(int[] nums) {
        return solve(nums);
    }
}