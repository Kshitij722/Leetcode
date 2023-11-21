class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.length();
        string a1 = s.substr(0,n/2);
        string a2 = s.substr(n/2);
        int c=0,count=0;
        for(char i:a1){
            if(tolower(i)=='a'||tolower(i)=='e'||tolower(i)=='i'||tolower(i)=='o'||tolower(i)=='u'){
                c++;
            }
        }
        for(char i:a2){
            if(tolower(i)=='a'||tolower(i)=='e'||tolower(i)=='i'||tolower(i)=='o'||tolower(i)=='u'){
                count++;
            }
        }
        if(c==count) return true;
        return false;

    }
};