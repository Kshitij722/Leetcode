class Solution {
public:
    int getWinner(vector<int>& arr, int k){
        int ans = arr[0];
        int count = 0;
        if(k>arr.size()){
            auto it = max_element(arr.begin(),arr.end());
            return *it;
        }
        for(int i=0;i<arr.size()-1;i++){
            if(ans < arr[i+1]){
                ans = arr[i+1];
                count = 1;
        
            }
            else{
                count++;
                
            }
            if(count==k) return ans;
        }
        return ans;
    }
};