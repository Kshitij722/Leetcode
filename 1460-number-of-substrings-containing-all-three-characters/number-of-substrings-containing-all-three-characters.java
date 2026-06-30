class Solution {

    private static int solve(String s){
        int ans = 0;
        int len = s.length();
        int[] freq = new int[3];
        

        
        int j = 0;
        int i = 0;
        while(i < len){
            freq[s.charAt(i) - 'a']++;
            while(hasAll(freq)){
                ans += len - i;
                freq[s.charAt(j) - 'a']--;
                j++;
            }

            i++;

        }

     

        return ans;
    }

    private static boolean hasAll(int[] freq){
        return freq[0] > 0 && freq[1] > 0 && freq[2] > 0;
    }

    public int numberOfSubstrings(String s) {
        return solve(s);
    }
}