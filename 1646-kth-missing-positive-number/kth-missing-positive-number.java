class Solution {
    public int findKthPositive(int[] arr, int k) {
        ArrayList<Integer> leftout = new ArrayList<Integer>();
        int start = 0;
        int leftouts = 1;
        int kPlace = 1;
        int ans = 0;
        while(kPlace <= k){
            if(start < arr.length){
                if(arr[start] == leftouts){
                    ans+=0;
                    start++;
                }
                else{
                  ans = leftouts;
                  kPlace++;  
                } 
            }
            else{
                ans = leftouts;
                kPlace++;
            }
            leftouts++;
        } 

        return ans;
    }
}