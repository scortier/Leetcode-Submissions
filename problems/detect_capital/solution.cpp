class Solution {
public:
    bool detectCapitalUse(string word) {
        int s=0,c=0;
        if(word.size()==0){
            return true;
        }
        if(word[0]>='A' && word[0]<='Z'){
            c=1;
        }
        else{
            s=1;
        }
        for(int i=1;i<word.size();i++){
            if(c){
                if(word[i]>='A' && word[i]<='Z'){
                    c++;
                }
            }
            if(s){
                if(word[i]>='a' && word[i]<='z'){
                    s++;
                }
            }
        }
        // cout<<c;
        if(s==word.size() || c==word.size() || c==1){
            return true;
        }
        return false;
    }
};