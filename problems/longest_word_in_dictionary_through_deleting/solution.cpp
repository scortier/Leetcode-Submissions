class Solution {
public:
    string findLongestWord(string s, vector<string>& d) 
    {
        string result = "";
        vector<int> buf;
        for (int k = 0; k < d.size(); k++)
        {
            string& word = d[k];
            int i = 0;
            int j = 0;
            while (i < word.length() && j < s.length())
            {
                if (word[i] == s[j])
                {
                    i++;
                }
                j++;
            }

            if (i == word.length())
            {
                if (buf.empty())
                {
                    buf.push_back(k);
                    continue;
                }

                if (word.length() > d[buf.back()].length())
                {
                    buf.clear();
                    buf.push_back(k);
                }
                else if (word.length() == d[buf.back()].length())
                {
                    buf.push_back(k);
                }
            }
        }

        if (buf.empty())
        {
            return result;
        }

        sort(buf.begin(), buf.end(), [&](int x, int y) {
            return d[x] < d[y];
        });

        result = d[buf.front()];

        return result;
    }
};