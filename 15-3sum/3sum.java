class Solution {
    int len = 0;
    public List<List<Integer>> threeSum(int[] nums) {
        len = nums.length;
        Arrays.sort(nums);
        return kSum(nums,0,3,0);
    }

    private List<List<Integer>> kSum(int[] nums, int target, int k, int index){
        List<List<Integer>> res = new ArrayList<List<Integer>>();
        if(index >= len) return res;
        if(k==2){
            int i = index, j = len - 1;
            while(i < j){
                if(target - nums[i] == nums[j]){
                    List<Integer> temp = new ArrayList<Integer>();
                    temp.add(nums[i]);
                    temp.add(nums[j]);
                    res.add(temp);
                    while(i<j && nums[i]==nums[i+1]) i++;
                    while(i<j && nums[j-1]==nums[j]) j--;
                    i++;
                    j--;
                }
                else if(target - nums[i] > nums[j]) i++;
                else j--;
            }
        }
        else{
            for(int i=index;i<len - k + 1;i++){
                List<List<Integer>> temp = kSum(nums, target - nums[i], k-1, i+1);
                if(temp != null){
                    for(List<Integer> t : temp){
                        t.add(0,nums[i]);
                    }
                    res.addAll(temp);
                }
                while(i<len-1 && nums[i] == nums[i+1]) i++;
            }
        }
        return res;
    }
}