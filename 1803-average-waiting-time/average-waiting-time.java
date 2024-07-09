class Solution {
    public double averageWaitingTime(int[][] customers) {
        double total = 0;
        int currTime = 0;
        for(int i=0;i<customers.length;i++){
            
            if(customers[i][0] > currTime){
                currTime = customers[i][0];
            
            }
            int total_w = currTime - customers[i][0] + customers[i][1];
            total += total_w;
            currTime+=customers[i][1];
            
        }

       
        return total/customers.length;
    }
}