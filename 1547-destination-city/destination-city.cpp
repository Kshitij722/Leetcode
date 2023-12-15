class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        set<string> a;
        unordered_map<string,int> b;
        for(int i=0;i<paths.size();i++){
          b[paths[i][0]]++;
          a.insert(paths[i][0]);
          a.insert(paths[i][1]);
        }
        string s1;
        for(auto i:a){
            if(b.find(i)==b.end()){
                s1 = i;
            }
        }
        return s1;
    }
};