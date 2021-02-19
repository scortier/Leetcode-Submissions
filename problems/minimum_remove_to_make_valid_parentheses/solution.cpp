class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int close = count(s.begin(), s.end(), ')');
        int open = 0;

        string res;
        for(auto ch : s){
            if (ch == '('){
                if(open == close) continue;
                open++;
            }else if (ch == ')'){
                close--;
                if (open == 0) continue;
                open--;
            }
            res += ch;
        }        

        return res;
    }
};