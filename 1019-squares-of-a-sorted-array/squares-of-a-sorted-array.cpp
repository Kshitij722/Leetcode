class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> a;
        for(auto i:nums){
            a.push_back(i*i);
        }
        sort(a.begin(),a.end());
        return a;
    }
};