class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        set<int> a;
        for(int i=0;i<edges.size();i++){
            int h = edges[i][1];
            a.insert(h);
        }
        for(auto i:a){
            cout<<i<<' ';
        }
        if(n - a.size() > 1) return -1;
        int k = 0;
        for(auto i:a){
            if(i != k){
                break;
            }
            k++;
        }
        return k;
    }
};