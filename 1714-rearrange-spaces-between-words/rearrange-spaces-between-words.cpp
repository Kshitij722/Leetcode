class Solution {
public:
    string reorderSpaces(string text) {
        int n = text.length();
        int count = 0;
        string s;
        vector<string> a;
        for(auto i:text){
            if(i==' '){ 
            count++;
            if(!s.empty()){
                a.push_back(s);
                s="";
            }
            
            }
            else{
                s+=i;
            }

        }
        if(!s.empty()){
            a.push_back(s);
        }
        if(a.size()==1) return a.back() + string(count,' ');
        int tot = count/(a.size()-1);
        int rem = count%(a.size()-1);
        string k;
        for(auto i:a){
            k+= i + string(tot,' ');
        }
        return k.substr(0,k.size()-tot) + string(rem,' ');
    }
};