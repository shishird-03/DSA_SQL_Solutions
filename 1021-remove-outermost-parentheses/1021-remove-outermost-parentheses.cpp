class Solution {
public:
    string removeOuterParentheses(string s) {
        string result;
        int counter=0;
        for(char c:s){
            if(c=='('){
                if (counter>0)
                result+=c;
                counter++;
            }else if(c==')'){
                counter--;
                if(counter>0) result+=c;
            }
        }
        return result;
        
    }
};