class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>> a;
        for(int i=0;i<names.size();i++){
            a.push_back(make_pair(heights[i],names[i]));
        }
        sort(a.begin(),a.end());
        vector<string> b;
        for(auto i:a){
            cout<<i.first<<" ";
            b.push_back(i.second);
        }
        reverse(b.begin(),b.end());
        return b;
    }
};