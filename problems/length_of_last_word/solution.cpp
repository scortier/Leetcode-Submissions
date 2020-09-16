class Solution 
{
public:
    int lengthOfLastWord(string s) 
    {
        if (s.length() == 0)
        {
            return 0;
        }
        
        int l = s.length() - 1;
        int r = s.length() - 1;
        
        while (r >= 0 && s[r] == ' ')
        {
            r--;
        }

        l = r;
        
        while (l >= 0 && s[l] != ' ')
        {
            l--;
        }
        
        return r - l;
    }
};