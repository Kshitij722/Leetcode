class Solution {
public:
    string strWithout3a3b(int a, int b) {
       string s="";
       int c_a= 0,c_b=0;
       while(a>0 || b>0){
         if(a>b){
             if(c_a==2){
                b--;
                c_b=1;
                c_a=0;
                s+="b";
             }
             else{
                 a--;
                 c_a++;
                 c_b=0;
                 s+="a";
             }
         }
         else{
             if(c_b==2){
                 a--;
                 c_a=1;
                 c_b=0;
                 s+='a';
             }
             else{
                b--;
                c_b++;
                c_a=0;
                s+="b";
             }
         }
       }
       return s;
    }
};