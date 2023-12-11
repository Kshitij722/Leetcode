class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> a;
        unordered_map<string,int> b;
        int i=0;
        if(s.length()<10) return {};
        while(i<s.length()-9){
            string s1 = s.substr(i,10);
            b[s1]++;
            i++;
        }
        for(auto i:b){
            if(i.second>1){
                a.push_back(i.first);
            }
        }
        return a;
    }
};