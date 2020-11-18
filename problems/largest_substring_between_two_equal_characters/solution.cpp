class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char, set<int>> letters;
        int maxLen = -1, len = -2;
        
        for(int i = 0; i < s.size(); i++) {
            if(letters.count(s[i]) > 0) {
                letters[s[i]].insert(i);
            } else {
                set<int> letterPos;
                letterPos.insert(i);
                letters[s[i]] = letterPos;
            }
        }
        
        for(auto it = letters.begin(); it != letters.end(); it++) {
            if((it->second).size() > 1) {
                len = *((it->second).rbegin()) - *((it->second).begin()) - 1;
                if(len > maxLen)
                    maxLen = len;
            }
        }
        
        return maxLen;
    }
};