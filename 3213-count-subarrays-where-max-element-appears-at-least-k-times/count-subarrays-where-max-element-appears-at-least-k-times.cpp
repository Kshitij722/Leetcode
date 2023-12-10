class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long ans = 0;
        int m = *max_element(nums.begin(),nums.end());
        int i=0,j=0,n=nums.size();
        int count = 0;
        while(i<n){
            if(nums[i]==m) count++;
            if(count>=k){
                while(count>=k){
                    ans+=n-i;
                    if(nums[j]==m) count--;
                    j++;
                }
            }
            i++;
        }
        return ans;
    }
};