class Solution:
    def longestMountain(self, A: List[int]) -> int:
        left, right = 0, 1
        length = 0
        while(right < len(A)):
            if(A[left] >= A[right]):
                left += 1
                right += 1
            else:
                haveRight = 0
                while(right < (len(A)-1) and A[right] < A[right+1]):
                    right += 1
                while(right < (len(A)-1) and A[right] > A[right+1]):
                    right += 1
                    haveRight = 1
                if(haveRight):
                    length = max(length,right-left+1)
                left = right
                right = left + 1
        return length 