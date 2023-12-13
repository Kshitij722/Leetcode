class Solution {
public:
    int countGoodSubstrings(string s) {
        int i=0,j=0;
        int count = 0;
        unordered_map<char,int> a;
        while(i<s.length()){
            a[s[i]]++;
            if(i-j+1 == 3){
                if(a.size()==3) {
                    count++;
                }
                a[s[j]]--;
                if(a[s[j]]==0) a.erase(s[j]);
                j++;
            }
            i++;

        }
        return count;
    }
};