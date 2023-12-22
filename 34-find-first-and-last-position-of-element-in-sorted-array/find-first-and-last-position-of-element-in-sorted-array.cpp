class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size();
        while(l < r){
            int mid = (r+l)/2;
            if(nums[mid]>=target){
                r = mid;
            }
            else{
                l = mid+1;
            }
        }
        int left = l;
        r = nums.size();
        while(l<r){
            int mid = (r+l)/2;
            if(nums[mid]>target){
                r = mid;
            }
            else{
                l = mid+1;
            }
        }
        int right = l;
        if(left==right) return {-1,-1};
        return {left,right-1};
    }
};