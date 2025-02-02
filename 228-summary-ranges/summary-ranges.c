/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** summaryRanges(int* nums, int numsSize, int* returnSize) {
    char** ans = (char**)malloc(numsSize * sizeof(char*));   
    *returnSize = 0;

    for(int i=0;i<numsSize;i++){
        int start = nums[i];
        while(i+1 < numsSize && nums[i+1] == nums[i] + 1){
            i++;
        }
        int end = nums[i];
        ans[*returnSize] = (char*)malloc(25 * sizeof(char));
        if(start == end)
            sprintf(ans[*returnSize], "%d", start);
        
        else
            sprintf(ans[*returnSize],"%d->%d",start,end);
        
        (*returnSize)++;
    }
    return ans;
}