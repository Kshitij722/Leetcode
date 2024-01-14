class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size()) return false;
        map<char,int> a,b;
        vector<int> c,d;
        for(int i=0;i<word1.size();i++){
            a[word1[i]]++;
            b[word2[i]]++;
        }
        
        for(auto i:a){
            auto it = b.find(i.first);
            if(it!=b.end()){
                c.push_back(i.second);
                d.push_back(it->second);
            }
            else{
                return false;
            }
        } 
        sort(c.begin(),c.end());
        sort(d.begin(),d.end());
        if(c==d) return true;
        else return false;
        
    }

};