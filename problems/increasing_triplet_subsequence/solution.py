class Solution:
    def increasingTriplet(self, nums: List[int]) -> bool:
        left = mid = float('inf')
        for i in nums:
            if(i <= left):
                left = i
            elif(i <= mid):
                mid = i
            else:
                return True
        return False 