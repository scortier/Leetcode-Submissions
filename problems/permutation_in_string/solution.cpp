class Solution {
public:
    bool checkInclusion(string s1, string s2) {
    int n = s1.size(), m = s2.size(), ar[26] = {0}, currCount = n, start = 0;
    for(auto c : s1) ++ar[c-'a'];
    for(int i = 0;i<m;i++) {
        if (ar[s2[i]-'a']-- > 0) --currCount;
        while(currCount == 0) {
            if ((i - start + 1) == n) return true;
            if (ar[s2[start++] - 'a']++ == 0) ++currCount;
        }
    }
    return false;
 }
    
};