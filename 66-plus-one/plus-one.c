/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int* ans = (int*)malloc((digitsSize+1) * sizeof(int));
    int carry = 1;
    for(int i= digitsSize - 1;i>=0;i--){
        int sum = digits[i]+carry;
        ans[i+1] = sum%10;
        carry = sum/10;
    }
    if(carry){
        ans[0] = 1;
        *returnSize = digitsSize + 1;
        return ans;
    }

    *returnSize = digitsSize;
    return ans+1;
    
}