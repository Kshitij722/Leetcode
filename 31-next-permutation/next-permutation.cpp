class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int break_pt = -1;
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i] > nums[i-1]){
                break_pt = i-1;
                break;
            }
        }
        if(break_pt == -1){
            reverse(nums.begin(),nums.end());
        }
        else{
        for(int i=nums.size()-1;i>break_pt;i--){
            if(nums[break_pt] < nums[i]){
                int temp;
                temp = nums[break_pt];
                nums[break_pt] = nums[i];
                nums[i] = temp;
                break;
            }
        }     
        vector<int> a;
        for(int i=break_pt+1;i<nums.size();i++){
            a.push_back(nums[i]);
        }
        sort(a.begin(),a.end());
        int j=0;
        for(int i=break_pt+1;i<nums.size();i++){
            nums[i] = a[j];
            j++;
        }
        }
    }
};