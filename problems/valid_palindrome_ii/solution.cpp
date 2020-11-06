class Solution {
public:
    bool validPalindrome(string s) {
        if(s.length()<=1)
            return true;
        int n=s.length();
        int i=0,j=n-1;
        if(isPalindrome(s,i,j))
            return true;
        while(i<=j)
        {
            if(s[i]!=s[j])
            {
                bool c1=isPalindrome(s,i+1,j);
                bool c2=isPalindrome(s,i,j-1);
                if(c1 or c2)
                    return true;
                else
                    return false;
            }
            j--;
            i++;
        }
        return false;
    }
    bool isPalindrome(string s,int i,int j)
    {
        while(i<=j)
        {
            if(s[i]!=s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};