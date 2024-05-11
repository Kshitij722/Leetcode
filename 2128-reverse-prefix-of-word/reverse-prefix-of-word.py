class Solution:
    def reversePrefix(self, word: str, ch: str) -> str:
        a = -1
        s = ""
        for i in range(len(word)):
            if(word[i]==ch):
                a = i
                s+=word[i]
                break
            else:
                s+=word[i]
        if a==-1:
            return word
        c = s[::-1]
        ans = ""
        ans += c
        for i in range(a+1,len(word)):
            ans+=word[i]
        return ans

