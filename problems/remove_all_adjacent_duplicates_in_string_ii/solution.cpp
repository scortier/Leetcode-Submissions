class Solution 
{
public:
    string removeDuplicates(string s, int k) 
    {
        vector<pair<char,int>> buf; // <character, appearances>
        int i = 0;
        while (i < s.length())
        {
            if (buf.empty())
            {
                buf.push_back(make_pair(s[i], 1));
            }
            else
            {
                if (buf.back().first == s[i])
                {
                    if (buf.back().second == k - 1)
                    {                        
                        buf.pop_back();
                    }
                    else
                    {
                        buf.back().second++;
                    }
                }
                else
                {
                    buf.push_back(make_pair(s[i], 1));
                }
            }

            i++;
        }

        string result = "";
        for (pair<char, int>& p : buf)
        {
            for (int i = 0; i < p.second; i++)
            {
                result.push_back(p.first);
            }
        }

        return result;
    }
};