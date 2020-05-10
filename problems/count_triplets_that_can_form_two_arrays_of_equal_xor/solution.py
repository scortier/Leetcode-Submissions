# importing prediefined from py

from collections import Counter

# defining class 

class Solution(object):
    # defining variables 
    def countTriplets(self, arr):
        # defingng type arry list 
        
        """
        :type arr: List[int]
        :rtype: int
        """
        # defining initial counter as h
        
        h = Counter()
        # giving variable start from 0 to n
        prefix = [0]
        # or condition from 0 to n 
        
        xor = 0
        
        # for-while loop codnition 
        
        for num in arr:
            # print value 
            
            xor ^= num
            # next values with arry list 
            
            prefix.append(xor)
            # initial value res = 0 
            
        res = 0
        # defining array = n
        n = len(arr)
        # for- while looping conditin for i 
        for i in xrange(1, n):
            # same condtion further for J
            for j in xrange(i + 1, n + 1):
                # same for K
                for k in xrange(j, n + 1):
                    # if - else looping condtion for all variables
                    
                    if prefix[j - 1] ^ prefix[i - 1] == prefix[k] ^ prefix[j - 1]:
                        # logical execution incr. eace from one
                        
                        res += 1
                        # returning values 
        return res