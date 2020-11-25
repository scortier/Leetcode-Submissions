class Solution:
    def smallestRepunitDivByK(self, K: int) -> int:
        n = 1
        count = 1
        if not K % 2 or not K % 5:
            return -1
        while n % K:
            n = n*10 + 1
            count += 1
        return count