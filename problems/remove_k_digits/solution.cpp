class Solution {
public:
    string removeKdigits(string num, int k) {
        string ans = "";
        int n = num.length();
        if (n == k)
            return "0";
        while (k > 0) {
            int flag = 1;
            for (int i=0; i<n-1; ++i) {
                if (num[i] > num[i+1]) {
                    num.erase(num.begin()+i, num.begin()+i+1);
                    --n;
                    --k;
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
                break;
        }
        while (k > 0) {
            for (int i=n-1; i>=1; --i) {
                if (num[i] >= num[i-1]) {
                    --n;
                    --k;
                    break;
                }
            }
        }

        int zf = 1;
        for (int i=0; i<n; ++i) {
            while (zf == 1 and num[i] == '0')
                ++i;
            zf = 0;
            if (i < n) {
                ans += num[i];
            }
        }
        if (ans.length() == 0)
            return "0";
        return ans;
    }
};