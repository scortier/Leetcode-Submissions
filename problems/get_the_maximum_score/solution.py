class Solution:
    
    # new class
    
    def maxSum(self, nums1, nums2) -> int:
        
        # limiting the value
        
        mod = 10 ** 9 + 7

        
        # new defs
        
        def getPrefix(a):
            
            # array 
            
            pre = [0] * (len(a) + 1)
            
            # for loop
            
            for k in range(1, len(a) + 1):
                pre[k] = pre[k - 1] + a[k - 1]
                
                # exit 1
            return pre

        
        # new numbs 
        
        n1, n2 = len(nums1), len(nums2)
        
        # new array 
        
        a1, a2 = [0], [0]
        i, j = 0, 0
        
        # while loop
        
        while i < n1 and j < n2:
            
            # if loop
            
            if nums1[i] == nums2[j]:
                
                # appending the array
                
                a1.append(i + 1)
                a2.append(j + 1)
                
                # incr by 1
                
                i += 1
                
                # incr
                
                j += 1
                
                # else loop
                
            elif nums1[i] < nums2[j]:
                
                # incr by 1
                
                i += 1
                
                # else loop
                
            else:
                
                # incr by 1
                
                j += 1
                
                # appending 
                
        a1.append(n1)
        a2.append(n2)
        
        # prefix
        
        p1, p2 = getPrefix(nums1), getPrefix(nums2)
        
        # init answer to zero
        
        ans = 0
        
        # for loop 
        
        for i in range(1, len(a1)):
            
            # answer cals
            
            
            ans = (ans + max(p1[a1[i]] - p1[a1[i - 1]], p2[a2[i]] - p2[a2[i - 1]])) % mod
            
            # exit to answer
        return ans