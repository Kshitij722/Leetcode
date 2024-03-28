class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> a;
        int ans=0;
        for(int i=0,j=0;j<nums.size();j++){
            a[nums[j]]++;
            while(a[nums[j]]>k){
                a[nums[i]]--;
                i++;
            }
            ans = max(ans,j-i+1);
        }
        return ans;
    }
};