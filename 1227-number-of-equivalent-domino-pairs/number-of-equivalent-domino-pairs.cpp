class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int ans = 0;
        map<pair<int,int>,int> a;
        for(int i=0;i<dominoes.size();i++){
            if(dominoes[i][0] > dominoes[i][1]){
                a[{dominoes[i][1],dominoes[i][0]}]++;
            }
            else{
                a[{dominoes[i][0],dominoes[i][1]}]++;
            }

        }
        for(auto i:a){
           ans += i.second * (i.second-1) / 2;
        }
        return ans;
    }
};