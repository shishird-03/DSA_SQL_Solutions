class Solution {
public:
    int maxDepth(string s) {
        
        int pass=0;
        int ans=0;
        for(char c :s){
            if(c=='('){
                pass++;
            }
            else if(c==')'){
                pass--;
                
            }
            ans=max(ans,pass);

        }
        return ans;
        
    }
};