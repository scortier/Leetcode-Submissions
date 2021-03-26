class Solution {
public:
    vector<string> wordSubsets(vector<string>& A, vector<string>& B) {
        vector<int> temp;
        vector<int> help(26, 0);

        for(string b : B)
        {
            temp = count(b);
            for(int i=0;i<26;i++)
            {
                help[i] = max(help[i], temp[i]);
            }

        }

        vector<string> res;
        for(string a: A)
        {
            temp = count(a);
            int i;
            for(i=0;i<26;i++)
            {
                if(temp[i]<help[i])
                {
                    break;
                }
            }
            if(i==26)
            {
                res.push_back(a);
            }
        }
        return res;
    }


    vector<int> count(string s)
    {
        vector<int> res(26, 0);
        for(int i=0;i<s.length();i++)
        {
            res[s[i]-'a']++;
        }
        return res;
    }
};