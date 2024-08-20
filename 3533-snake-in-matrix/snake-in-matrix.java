class Solution {
    public int finalPositionOfSnake(int n, List<String> commands) {
        int i = 0, j=0;
        for(String s : commands){
            if(s.equals("RIGHT")) j++;
            else if(s.equals("LEFT")) j--;
            else if(s.equals("DOWN")) i++;
            else if(s.equals("UP")) i--;
        }
        // System.out.println(i+" "+j);
        return (i*n) + j;
    }
}