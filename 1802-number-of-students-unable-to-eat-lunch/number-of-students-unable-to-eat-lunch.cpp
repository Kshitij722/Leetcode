class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int a=0,b=0,c=0,d=0;
        for(auto i: students){
            if(i==1) a++;
            else b++;
        }
        for(auto i: sandwiches){
            if(i==1) c++;
            else d++;
        }
        if(a==c) return 0;
        if(a>c){
            int zeros = 0,ans;
            for(int i=0;i<sandwiches.size();i++){
                if(sandwiches[i]==0) zeros++;
                if(zeros > b){
                    ans = i;
                    break;
                } 
        
            }
            return students.size()-ans;
        }
        else{
            int ones = 0,ans;
            for(int i=0;i<sandwiches.size();i++){
                if(sandwiches[i]==1) ones++;
                if(ones > a){
                    ans = i;
                    break;
                } 
        
            }
            return students.size()-ans;
        }
    }
};