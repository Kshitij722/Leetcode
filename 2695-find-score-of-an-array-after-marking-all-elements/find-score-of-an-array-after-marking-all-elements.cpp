class Solution {
public:
    long long findScore(vector<int>& nums) {
        long long ans = 0;
        set<pair<int,int>> a;
        for(int i=0;i<nums.size();i++){
            a.insert({nums[i],i});
        }
        for(auto i:a){
            if(nums[i.second]){
                nums[i.second] = 0;
                if(i.second - 1>=0){
                    nums[i.second-1] = 0;
                }
                if(i.second + 1 < nums.size()){
                    nums[i.second+1] = 0;
                }
                ans+=i.first;
            }
        }
        return ans;
    }
};