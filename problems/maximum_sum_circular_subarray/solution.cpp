// Author :- Siddhant Khare

class Solution {
public:
    int maxSubarraySumCircular(vector<int>& arr) {
        int n = arr.size();

        int currMaxSum = arr[0];
        int maxSum = arr[0];

        int currMinSum = arr[0];
        int minSum = arr[0];

        int total = arr[0];

        for (int i = 1; i < n; i++) {
            //KADANE'S ALGO FOR MAX SUM
            currMaxSum = max(currMaxSum + arr[i], arr[i]);
            maxSum = max(maxSum, currMaxSum);

            //KADANE'S ALGO FOR MIN SUM
            currMinSum = min(currMinSum + arr[i], arr[i]);
            minSum = min(minSum, currMinSum);

            //TOTAL SUM
            total += arr[i];
        }

        if (maxSum < 0) {
            return maxSum;
        }

        if (maxSum > (total - minSum)) {
            return maxSum;
        } else {
            return total - minSum;
        }
    }
};