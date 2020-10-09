class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1)    return s;
        string res;
        for(int i = 0;i < numRows;i++){
            for(int j = i;j < s.size();j += 2*numRows - 2){
                res += s[j];
                //Add a verse element.
                if(i != 0 && i != numRows - 1 && j+2*(numRows-1-i) < s.size()){
                    res += s[j+2*(numRows-1-i)];
                }
            }
        }
        return res;
    }
};