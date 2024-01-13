class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int> a,b;
        int count = 0;
         for(char i:t){
            a[i]++;
        }
        for(char i:s){
            b[i]++;
        }
        for(auto i:a){

            auto it = b.find(i.first);
            if(it != b.end()){
                if(i.second > it->second){
                    count+=(i.second - it->second);
                }
            }
            else{
                count+=i.second;
            }
        }
        return count;
    }
};