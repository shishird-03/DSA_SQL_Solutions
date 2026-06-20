class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int m= magazine.length();
        int i=0;
        int counts[26]={0};
        while(i<m){
           counts[magazine[i] - 'a']++;
            i++;
        }
        int j=0;
        while(j<ransomNote.length()){
            int index=ransomNote[j]-'a';
            if(counts[index]==0){
                return false;
            }
            counts[index]--;
            j++;
        }
return true;
        }
    };