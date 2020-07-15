class Solution {
public:
    string reverseWords(string s) {
        stringstream str(s); 
        string word, result;
        
        while (str >> word)
            result = word + " " + result;
        
        if (result.size()) 
            result.pop_back();
        
        return result;
    }
};