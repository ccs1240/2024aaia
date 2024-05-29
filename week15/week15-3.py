#week15-1.py a half of python theb after have c language coding
class Solution:
    def equalSubstring(self, s: str, t: str, maxCost: int) -> int:
        #先用python把字串的迴圈寫出來
        N=len(s)
        ans = 0
        j=0 #字串長度
        for i in range (N):#字串FOR
            maxCost-=abs(ord(s[i])-ord(t[i]))
            while maxCost<0:
                maxCost +=abs(ord(s[j])-ord(t[j]))
                j+=1
            ans =max(ans,i-j+1)
        return ans #課堂作業1 先隨便給個零當答案
        