class Solution {
    public List<String> letterCombinations(String digits) {
        String[] phone_book = {"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        List<String> ans = new ArrayList<>();
        if(digits.isEmpty()){
            return ans;
        }
        solve("",digits,phone_book,ans);
        return ans;
        

    }

    public void solve(String currletter, String digit, String[] phone_book, List<String> ans){
        if(digit.isEmpty()){
            ans.add(currletter);
        }
        else{
            String letters = phone_book[digit.charAt(0) - '2'];
            for(Character l : letters.toCharArray()){
                solve(currletter + l, digit.substring(1), phone_book, ans);
            }
        }
    }
}