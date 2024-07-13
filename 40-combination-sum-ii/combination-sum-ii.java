class Solution {

    public static void findCombination(int[] candidates, int target, int idx, List<List<Integer>> ans, List<Integer> sum){

        if(target==0){
            ans.add(new ArrayList<>(sum));
            return;
        }

        for(int i=idx;i<candidates.length;i++){
            if(i>idx && candidates[i]==candidates[i-1]) continue;
            if(candidates[i]>target) break;

            sum.add(candidates[i]);
            findCombination(candidates,target-candidates[i],i+1,ans,sum);
            sum.remove(sum.size()-1);
        }
    }

    public List<List<Integer>> combinationSum2(int[] candidates, int target) {
        List<List<Integer>> ans = new ArrayList<List<Integer>>();
        List<Integer> sum = new ArrayList<Integer>();
        Arrays.sort(candidates);
        findCombination(candidates,target,0,ans,sum);
        return ans;
    }
}