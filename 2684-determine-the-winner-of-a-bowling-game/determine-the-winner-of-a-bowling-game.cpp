class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
         int cnt1=0, cnt2=0, player1_Value=0, player2_Value=0;
        
        for(int i=0; i<player1.size(); i++) {
            if(cnt1 > 0)    {
                player1_Value += (2*player1[i]);
                cnt1--;
            }
            else    player1_Value += player1[i];
            if(player1[i] == 10)    cnt1 = 2;
            
            if(cnt2 > 0)    {
                player2_Value += (2*player2[i]);
                cnt2--;
            }
            else    player2_Value += player2[i];
            if(player2[i] == 10)    cnt2 = 2;
        }
        
        if(player1_Value == player2_Value)    return 0;
        if(player1_Value > player2_Value)     return 1;
        return 2;
    }
};