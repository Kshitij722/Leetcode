class Solution {
    public static void permutations(int[] nums, int idx,  List<List<Integer>> ans ){

        if(idx == nums.length){
            List<Integer> perm = new ArrayList<Integer>();
            for(int i=0;i<nums.length;i++){
                perm.add(nums[i]);
            }
            ans.add(new ArrayList<>(perm));
       
            return;
        }

        for(int i=idx;i<nums.length;i++){
            swap(i,idx,nums);
            permutations(nums,idx+1,ans);
            swap(i,idx,nums);
        }
    }

    private static void swap(int i,int idx, int[] nums){
        int temp = nums[i];
        nums[i] = nums[idx];
        nums[idx] = temp;
    }

    public List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> ans = new ArrayList<List<Integer>>();

        permutations(nums,0,ans);
        return ans;
    }
}