class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(),happiness.end(), greater<int>());
        long long sum = 0;
        int i=0;
        while(k>0){
            if(happiness[i]!=0){
            if(happiness[i]-i >= 0){
            sum += happiness[i] - i;
            }
            k--;
            i++;
            }
            else{
                break;
            }
        }
        return sum;
    }
};