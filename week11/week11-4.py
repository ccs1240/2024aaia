class Solution:
    def reversePrefix(self, word: str, ch: str) -> str:
        for i in range(len(word)):
            if word[i]==ch:
                    return word[i::-1]+word[i+1:] #特殊範圍的寫法
        return word