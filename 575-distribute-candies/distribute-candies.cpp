class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        set<int> b;
        for(int i=0;i<candyType.size();i++){
            b.insert(candyType[i]);
        }
        if(n/2 == b.size()) return n/2;
        if(n/2 > b.size()) return b.size();
        return n/2;

    }
};