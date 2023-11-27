class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long> a;
        long long second_r = num%3;
        if(second_r==0){
            a.push_back((num/3) - 1);
            a.push_back(num/3);
            a.push_back((num/3)+1);
        }
        return a;
    }
};