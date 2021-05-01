class WordFilter {
    class TrieNode{
        public:
        TrieNode* next[27];
        vector<int> ids;
        TrieNode(){
            for (int i=0; i<27; ++i)
                next[i] = NULL;
        }
    };
    TrieNode* root;

public:
    void buildTree(TrieNode* root, string S, int id) {
        TrieNode* node = root;
        for (char ch:S)
        {
            if (node->next[ch-'a']==NULL)
                node->next[ch-'a'] = new TrieNode();
            node = node->next[ch-'a'];
            node->ids.push_back(id);
        }
    }
    WordFilter(vector<string>& words) {
        root = new TrieNode();
        for (int i=0; i<words.size(); ++i)
        {
            string word = words[i];
            for (int j=0; j<word.size(); ++j)
            {
                string rword = word.substr(j);
                reverse(rword.begin(), rword.end());
                buildTree(root, rword+"{"+word, i);
            }
            buildTree(root, "{"+word, i);
        }
    }

    int f(string prefix, string suffix) {
        reverse(suffix.begin(), suffix.end());
        string S = suffix+"{"+prefix;
        TrieNode* node = root;
        for (char ch:S)
        {
            if (node->next[ch-'a']==NULL)
                return -1;
            node = node->next[ch-'a'];
        }
        return node->ids.back();
    }
};

/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter* obj = new WordFilter(words);
 * int param_1 = obj->f(prefix,suffix);
 */