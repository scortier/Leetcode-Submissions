class Solution 
{
    public:
    bool isValid(string s) 
    {
        stack<char>S;

        for(int i=0 ; i<s.length() ; i++)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')  
                S.push(s[i]);
            else
            {
                if(!S.empty() && S.top()=='(' && s[i]==')') 
                    S.pop();
                else 
                    if(!S.empty() && S.top()=='[' && s[i]==']') 
                    S.pop();
                else 
                    if(!S.empty() && S.top()=='{' && s[i]=='}') 
                    S.pop();
                else 
                    return false;
            }
        }
        return S.empty();
    }
};