class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int> b;
        for(int i=0;i<paths.size();i++){
          b[paths[i][0]]++;
        }
        for(int i=0;i<paths.size();i++){
            if(b.find(paths[i][1]) == b.end()) return paths[i][1];
        }
        return "";
    }
};