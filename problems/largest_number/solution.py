class Solution:
    def largestNumber(self, nums: List[int]) -> str:
        if sum(nums) == 0:
            return "0"

        def cmp_func(x, y):
            if x + y > y + x:
                return 1
            elif x == y:
                return 0
            else:
                return -1

        strs = [str(_) for _ in nums]
        strs.sort(key=cmp_to_key(cmp_func), reverse=True)

        return ''.join(strs).lstrip('0') or '0'