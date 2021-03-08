class Solution {
public:
    int removePalindromeSub(string s)
  {
    if (s.length() == 0)
      return 0;

    int left = 0, right = s.length() - 1;
    while (left < right)
    {
      if (s[left++] != s[right--])
        return 2;
    }

    return 1;
  }

};