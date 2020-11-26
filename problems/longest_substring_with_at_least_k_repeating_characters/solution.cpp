class Solution {
public:
    int longestSubstring(string s, int k) {
        int n = (int)s.size();
        unordered_map<char,int> mp;
        if(s.size()==0 || k>s.size())
            return 0;
        if(k==0)
            return s.size();
        for(char c:s)
            ++mp[c];
        int idx=0;
        while(idx<n && mp[s[idx]] >= k)
            ++idx;

        if(idx==n)
            return n;
        int left = longestSubstring(s.substr(0,idx),k);
        while(idx<n && mp[s[idx]]<k)
            ++idx;
        int right = longestSubstring(s.substr(idx),k);
        return max(left,right);

    }
};