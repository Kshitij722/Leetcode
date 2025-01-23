class Solution {
    public int countServers(int[][] grid) {
        int m = grid.length;
        int n = grid[0].length;
        int[] rowCheck = new int[m];
        int[] colCheck = new int[n];
        int count = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == 1){
                    rowCheck[i]++;
                    colCheck[j]++;
                    count++;
                }
            }
        }
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == 1){
                    if(rowCheck[i] == 1 && colCheck[j] == 1){
                        count--;
                    }
                }
            }
        }
        return count;
    }
}