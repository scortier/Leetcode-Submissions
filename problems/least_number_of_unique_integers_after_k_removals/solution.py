# Author : Siddhant Khare
class Solution:
    
    # definign class
    
    def findLeastNumOfUniqueInts(self, arr: List[int], k: int) -> int:
        
        # spllit 
        dic = {}
        
        # fore looping
        
        for i in range(len(arr)):
            
            # uif loops
            
            if arr[i] not in dic.keys():
                
                # diff array
                
                dic[arr[i]] = 0
                
                # array init 
                
            dic[arr[i]] += 1
            
            # array inbput 
            
        l = []
        
        # loop[pig ofor
        
        for i in dic.keys():
            
            # loop
            
            l.append([i, dic[i]])
            
            # sorting
            
        l = sorted(l, key=lambda x:(x[1]))
        
        
        # counter
        
        count = 0
        
        # while loops
        
        while count < k:
            
            # poping 
            
            tmp = l.pop(0)[1]
            
            # loops
            
            if count + tmp <= k:
                
                # ans
                
                count+= tmp
                
                # loop
                
            elif count + tmp > k:
                
                # large array 
                
                l.append([0, 0])
                
                # bre@k
                
                break
                
                # exit
                
        return len(l)
    
    # ENDS