class Solution:
    def pivotInteger(self, n: int) -> int:
        total=0 #全部加起來的數字
        #第一輪先算總和 total
        for i in range(1,n+1):
            total +=i #算出全部的總和

        
        left = 0
        for i in range(1,n+1):
            left += i
            if left + left-i==total: return i
        return -1