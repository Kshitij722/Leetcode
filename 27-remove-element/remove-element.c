int removeElement(int* nums, int numsSize, int val) {
    int ind = 0;
    for(int i=0;i<numsSize;i++){
        if(nums[i] != val){
            nums[ind] = nums[i];
            ind++;
        }
    }
    return ind;
}