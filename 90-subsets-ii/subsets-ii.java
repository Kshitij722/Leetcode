class Solution {

    
    public static void func(int[] a,int idx,List<Integer> a1,List<List<Integer>> arr1){
        
        if(idx==a.length){
            
            if(!arr1.contains(a1)){
                arr1.add(new ArrayList<Integer>(a1));
            }
            return;
        }
        func(a, idx + 1, a1,arr1);  
        a1.add(a[idx]);        
        func(a, idx + 1, a1,arr1);  
        a1.remove(a1.size() - 1);
        
    }
    public List<List<Integer>> subsetsWithDup(int[] nums) {
        Arrays.sort(nums);
        List<List<Integer>> arr1 = new ArrayList<List<Integer>>();
        List<Integer> a1 = new ArrayList<Integer>();
        func(nums,0,a1,arr1);
        return arr1;
    }
}