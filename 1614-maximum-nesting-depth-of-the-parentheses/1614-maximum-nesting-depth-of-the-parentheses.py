class Solution:
    def maxDepth(self, s: str) -> int:
        st=[]
        dev=0
        for ch in s:
            if ch=="(":
                st.append(ch)
                dev=max(dev,len(st))
            elif ch==")":
                st.pop()
        return dev
        
        