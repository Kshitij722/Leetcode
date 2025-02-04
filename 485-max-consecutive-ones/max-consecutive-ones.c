int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int count=0;
    int ans = 0;
    for(int i=0;i<numsSize;i++){
        if(nums[i] == 1){
            count++;
        }
        else{
            ans = fmax(ans,count);
            count = 0;
        }
    }
    ans = fmax(ans,count);
    return ans;
}