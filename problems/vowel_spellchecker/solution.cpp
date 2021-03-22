class Solution 
{
public:
    string to_lower(string str)
    {
        string ret = str;
        for (int i = 0; i < str.length(); i++)
        {
            ret[i] = tolower(str[i]);
        }

        return ret;
    }

    // replace vowel with hyphen
    string to_key(string str)
    {
        string ret = str;
        for (int i = 0; i < str.length(); i++)
        {
            if (!isVowel(str[i]))
            {
                ret[i] = tolower(str[i]);
            }
            else
            {
                ret[i] = '-';
            }
        }

        return ret;
    }

    bool isVowel(char c)
    {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || 
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }

    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) 
    {
        // de-voweled key => index in the wordlist
        unordered_map<string, vector<int>> wordset;
        for (int i = 0; i < wordlist.size(); i++)
        {
            wordset[to_key(wordlist[i])].push_back(i);
        }

        vector<string> result;
        for (string& query : queries)
        {
            vector<int>& v = wordset[to_key(query)];            

            bool has_match = false;
            int position = INT_MAX;

            // find same word
            for (int i : v)
            {
                string& word = wordlist[i];
                if (word.compare(query) == 0)
                {
                    position = i;
                    has_match = true;
                    break;
                }
            }

            if (has_match)
            {
                result.push_back(wordlist[position]);
                continue;
            }

            // find capitalization case
            for (int i : v)
            {
                string& word = wordlist[i];
                if (word.length() == query.length())
                {
                    if (to_lower(word).compare(to_lower(query)) == 0)
                    {
                        position = i;
                        has_match = true;
                        break;
                    }
                }
            }

            if (has_match)
            {
                result.push_back(wordlist[position]);
                continue;
            }

            // find vowel mismatch
            for (int i : v)
            {
                string& word = wordlist[i];
                if (word.length() == query.length())
                {
                    if (to_key(word).compare(to_key(query)) == 0)
                    {
                        position = i;
                        has_match = true;
                        break;
                    }
                }
            }

            if (!has_match)
            {
                result.push_back("");
            }
            else
            {
                result.push_back(wordlist[position]);
            }
        }

        return result;
    }
};