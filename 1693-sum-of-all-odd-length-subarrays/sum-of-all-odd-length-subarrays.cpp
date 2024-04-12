class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
      int n = arr.size();
      vector<int> a(n);
      a[0] = arr[0];
      for(int i=1;i<n;i++){
        a[i] = a[i-1] + arr[i];
      }
      int total = a[n-1];
      for(int k=3;k<=n;k+=2){
        int i=0;
        while(i<=n-k){
            int j = i+k-1;
            if(i==0){
                total+= a[j];
            }
            else{
                total+= a[j] - a[i-1];
            }
            i++;
        }
      }
      return total;
    }
};