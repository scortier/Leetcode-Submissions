class Solution {
public:
    bool isSubsequence(string s, string t) {
    int m=t.length()-1;
    int n=s.length()-1;
    while(m>=0 && n>=0)
    {if(t[m]==s[n])
    {m=m-1;
        n=n-1;
    }
     else
         m=m-1;
    }
    return n<0;
    }
};