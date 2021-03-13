class Solution
{
public:
  int numFactoredBinaryTrees(vector<int> &arr)
  {
    sort(arr.begin(), arr.end());

    map<int, long> m;
    for (int i = 0; i < arr.size(); i++)
    {
      int product = arr[i];
      m[product] = 1;
      for (int j = 0; j < i; j++)
      {
        int left = arr[j];
        int right = product / left;
        if (left > right)
          break;

        if (product % left != 0 || m[right] == 0)
          continue;

        long combination = m[left] * m[right];
        m[product] += combination * (left == right ? 1 : 2);
      }
    }

    long ans = 0;
    for (auto itr = m.begin(); itr != m.end(); ++itr)
    {
      ans = (ans + itr->second) % (1000000007);
    }

    return ans;
  }
};