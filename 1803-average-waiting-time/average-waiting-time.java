class Solution {
    public double averageWaitingTime(int[][] customers) {
        double total = 0;
        int currTime = customers[0][0];
        for(int i=0;i<customers.length;i++){
            
            if(customers[i][0] > currTime){
                currTime = customers[i][0] + customers[i][1];
                int total_w = customers[i][1];
                total += total_w;
            }
            else{
            currTime += customers[i][1];
            int total_w = currTime - customers[i][0];
            total += total_w;
            }
        }

        
        return total/customers.length;
    }
}