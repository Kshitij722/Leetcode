class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        if(arr.size()==1) return 1;
        sort(arr.begin(),arr.end());
        if(arr[0]!=1){
            arr[0] = 1;
        }
        // for(auto i:arr){
        //     cout<<i<<" ";
        // }
        cout<<endl;
        for(int i=0;i<arr.size()-1;i++){
            if(abs(arr[i] - arr[i+1]) > 1){
                arr[i+1] = arr[i]+1;
            }
        
        }
        //  for(auto i:arr){
        //     cout<<i<<" ";
        // }
        return arr[arr.size()-1];
    }
};