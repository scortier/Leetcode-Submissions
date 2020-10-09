class Solution {
    bool is_match(const char *s, const char *p)
    {
        if (*p == 0) return *s == 0;  // Must be p empty before checking s. This means that the pattern string is complete, and the input string is just finished matching.
        bool first_match = *s && (*s == *p || *p == '.');
        if (*(p+1) == '*') {
            // The first case is that there is no preceding char in s. That is, skip the characters in the p-front.
            // s=abc, p=d*abc
            // The second case is that there is a preceding char in the p,char, which matches the preceding char.
            // s=aaac, p=a*c
            return is_match(s, p+2) || (first_match && is_match(++s, p));
        } else {
            return first_match && is_match(++s, ++p);
        }
    }
public:
    bool isMatch(string s, string p) {
        return is_match(s.c_str(), p.c_str());
    }
};
