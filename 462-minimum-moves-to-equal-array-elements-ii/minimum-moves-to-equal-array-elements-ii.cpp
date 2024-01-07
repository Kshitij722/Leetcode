class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int left = 0, right = n -1;
        int count = 0;
        while(left < right){
            count += nums[right] - nums[left];
            left++;
            right--;
        }
        return count;
    }
};