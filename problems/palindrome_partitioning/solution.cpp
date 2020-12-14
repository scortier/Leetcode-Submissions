class Solution {
  vector<vector<string>> ans;

  bool isPalindrome(const string& s) {
    int i = 0;
    int j = s.size() - 1;

    while (i < j) {
      if (s[i++] != s[j--]) {
        return false;
      }
    }

    return true;
  }

 public:
  vector<vector<string>> partition(string s) {
    dfs(s, {}, 0);

    return ans;
  }

  void dfs(string& s, vector<string> t, int i) {
    if (i == s.size()) {
      ans.push_back(t);
      return;
    }

    for (int j = i; j < s.size(); ++j) {
      string sub = s.substr(i, j - i + 1);

      if (isPalindrome(sub)) {
        t.push_back(sub);

        dfs(s, t, j + 1);

        t.pop_back();
      }
    }
  }
};