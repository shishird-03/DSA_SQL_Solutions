class Solution {
public:
    int romanToInt(string c) {
        int d=c.length();
        int res=0;
        unordered_map<char,int>roman={
            {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
        };
     for(int i=0;i<d-1;i++){
        if(roman[c[i]]<roman[c[i+1]]){
            res-=roman[c[i]];
        }
        else{
            res+=roman[c[i]];
        }
     }
     return res+ roman[c.back()];
    }
};
