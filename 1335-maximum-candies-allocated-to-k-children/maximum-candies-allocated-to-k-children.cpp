class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int l = 0;
        int h = 10000000;
        while(l<h){
            long long mid = (l+h+1)/2;
            long long sum = 0;
            for(auto i:candies){
                sum+= i/mid;
            }
            if(k>sum) h = mid - 1;
            else l = mid;

        }
        return l;
    }
};