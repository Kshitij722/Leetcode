class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        long long second_r = num%3;
        if(second_r==0){
            return {(num/3)-1,num/3,(num/3)+1};
        }
        else return {};
    }
};