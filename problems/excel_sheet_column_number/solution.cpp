class Solution {
public:
    int titleToNumber(string s) {
        int num = 0, mul = 0;
        for (char ch : s) {
            num = 26 * num + (ch-64);
        }
        return num;
    }
};