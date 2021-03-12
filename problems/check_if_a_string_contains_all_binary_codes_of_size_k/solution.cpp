class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if(s.length() < k) return false;

        set<string> str;

        for(int i = 0; i <= s.length()-k; i++){

            str.insert(s.substr(i, k));
        }

        return str.size() == pow(2, k);
    }
};