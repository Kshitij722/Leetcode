class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        int count =0 ;
        for(int i=0;i<nums.size();i++){
            prod *= nums[i];
            if(nums[i]==0) count++;
        }
        vector<int> a;
        int prod1 = 1;
        if(count>1){
            for(int i=0;i<nums.size();i++){
                a.push_back(0);
            }
        }
        else if(count == 1){
            for(int i=0;i<nums.size();i++){
                if(nums[i]!=0) prod1 *= nums[i];
            }
            for(int i=0;i<nums.size();i++){
                if(nums[i]==0){
                    a.push_back(prod1);
                }
                else{
                    a.push_back(0);
                }
            }
        }
        else{
            for(int i=0;i<nums.size();i++){
                a.push_back(prod/nums[i]);
            }
        }
        return a;
        
    }
};