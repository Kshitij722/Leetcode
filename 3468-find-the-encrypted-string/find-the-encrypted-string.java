class Solution {
    public String getEncryptedString(String s, int k) {
        String s1 = "";
        int len = s.length();
        for(int i=0;i<len;i++){
            s1 += s.charAt((k+i)%len);
        }
        return s1;
    }
}