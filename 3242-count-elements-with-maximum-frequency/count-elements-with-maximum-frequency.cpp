class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> a;
        for(auto i:nums){
            a[i]++;
        }
        int ans = 0,maxi=INT_MIN;
        for(auto i:a){
            maxi = max(maxi,i.second);
        }
        for(auto i:a){
            if(i.second == maxi){
                ans+=i.second;
            }
        }
        return ans;
    }
};