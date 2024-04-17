class Solution:
    def smallestFromLeaf(self, root: Optional[TreeNode]) -> str:
        #要做對照表 把0..25對照成字母
        table="abcdefghijklmnopqrstuvwxyz"#字母對照表
        def helper(root,nowStr):
            #if root==None: return nowStr #樹下沒有東西時 右邊累積的字串就是結果
            nextStr = table[root.val]+nowStr
            if root.left==None and root.right==None: return nextStr
            if root.left==None: return helper(root.right,nextStr)#左邊空的，只能往右跑
            if root.right==None: return helper(root.left,nextStr) #右邊空的，只能往左跑
            #以下是健康的答案 左右的有分支 兩邊都要算 再把小的答案送出去
            left=helper(root.left,nextStr)
            right=helper(root.right,nextStr)
            return min(left,right)#結果小的
        return helper(root,'')