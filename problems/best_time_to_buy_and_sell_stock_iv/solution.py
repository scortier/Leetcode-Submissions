class Solution:
    def maxProfit(self, k: int, prices: List[int]) -> int:
        curr_max_profit = 0 
        l = len(prices)
        # Optimization for leetcode: 
        # Basically, if you have l / 2 transactions, you can buy and sell every consecutive day. 
        # So our solution for 0122 will work for that case. 
        if k >= l / 2: 
            for i in range(1, l):
                curr_max_profit += max(prices[i] - prices[i - 1], 0)
            return curr_max_profit
        # DP array to store the max profit that can be made up to that day given one "new" transaction. 
        # For transaction n, we use this stored data to determine our decision on when to make the nth transaction. 
        # For the 1st transaction, they are all 0 because no profit has been made yet. 
        max_profit = [0 for _ in prices]
        for transaction in range(k):
            curr_pos = float("-inf")
            curr_max_profit = 0 
            for i in range(l): 
                # Our current position on day i is either doing nothing or buying stock on day i. 
                curr_pos = max(curr_pos, max_profit[i] - prices[i])
                # Max profit on day i is either what it was before or the result of selling stock on day i. 
                curr_max_profit = max(curr_max_profit, curr_pos + prices[i])
                max_profit[i] = curr_max_profit 
        return curr_max_profit 