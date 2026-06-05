class Solution:
    def removeStars(self, s: str) -> str:
        str=[]
        for ch in s:
            if str and ch=="*":
                str.pop()
            else:
                str.append(ch)
        return "".join(str)
        