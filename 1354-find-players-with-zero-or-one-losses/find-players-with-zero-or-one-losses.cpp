class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int> a;
        for(int i=0;i<matches.size();i++){
            if(!a.count(matches[i][0])) a[matches[i][0]] = 0;
            a[matches[i][1]]++;
        }
        vector<int> b,c;

        for(auto i: a){
            if(i.second == 0) b.push_back(i.first);
            if(i.second == 1) c.push_back(i.first);
        }
        return {b,c};
    }
};