class Solution:
    def calPoints(self, operations: List[str]) -> int:
        st=[]
        for ch in operations:
            if ch=='C':
                st.pop()
            elif ch=='D':
                st.append(st[-1]*2)
            elif ch=='+':
                st.append(st[-1]+st[-2])
            else:
                st.append(int(ch))
        return(sum(st))
