class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        int ans = n;
        set<int> a;
        int i = 0;
        while(i<n){
            a.insert(nums[i]);
            for(int k=i+1;k<n;k++){
                a.insert(nums[k]);
                ans+= pow(a.size(),2);
                cout<<ans<<" ";
            }
            
            a.clear();
            i++;
        }
        return ans;
    }
};