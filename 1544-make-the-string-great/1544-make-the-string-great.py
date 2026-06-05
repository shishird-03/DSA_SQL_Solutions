class Solution:
    def makeGood(self, s: str) -> str:
        str=[]
        for ch in s:
            if str and str[-1]!=ch and str[-1].lower()==ch.lower():
                str.pop()
            else:
                str.append(ch)
        return "".join(str)