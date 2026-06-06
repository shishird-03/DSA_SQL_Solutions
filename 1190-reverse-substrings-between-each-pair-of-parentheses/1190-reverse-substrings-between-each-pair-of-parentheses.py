class Solution:
    def reverseParentheses(self, s: str) -> str:
        st=[]
        for c in s:
            if c==")":
                temp=""
                while st[-1]!="(":
                    temp+=st.pop()
                st.pop()
                for i in temp:
                    st.append(i)
            else:
                st.append(c)
        return "".join(st)