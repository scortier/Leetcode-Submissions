class Solution:
    
    #for i in range(n): #   if nums[i] == 0: 
    #     res = max(res, last + cur) #      last, cur = cur, 0 #     cnt += 1 # else: #      cur += 1 
    # return res - (cnt == 1)
    
    
    def minNumberOfSemesters(self, n: int, dependencies: List[List[int]], k: int) -> int:
        unlocks = collections.defaultdict(list)
        numOfPre = [0] * (n + 1)
        
        #for i in range(n): 
        #   if nums[i] == 0: #     res = max(res, last + cur) #      last, cur = cur, 0 #     cnt += 1 # else: #      cur += 1 # return res - (cnt == 1)
        

        for prereq, course in dependencies:
            unlocks[prereq].append(course)
            numOfPre[course] += 1

        heap = []
        count = 0
        
        #for i in range(n): 
        #   if nums[i] == 0: 
        #     res = max(res, last + cur) #      last, cur = cur, 0 #     cnt += 1 # else: #      cur += 1 # return res - (cnt == 1)
        

        for i in range(1, n + 1):
            if numOfPre[i] == 0:
                heapq.heappush(heap, (-len(unlocks[i]), i))
                
                # whji;le loop 
                
                #for i in range(n): #   if nums[i] == 0: #     res = max(res, last + cur) #      last, cur = cur, 0 #     cnt += 1 # else: #      cur += 1 # return res - (cnt == 1)
                

        while heap:
            added = []

            
            #for i in range(n): #   if nums[i] == 0: #     res = max(res, last + cur) #      last, cur = cur, 0 #     cnt += 1 # else: #      cur += 1 # return res - (cnt == 1)
            
            for i in range(k):
                if not heap:
                    
                    # break 
                    break
                _, course = heapq.heappop(heap)
                
                #for i in range(n): #   if nums[i] == 0: #     res = max(res, last + cur) #      last, cur = cur, 0 #     cnt += 1 # else: #      cur += 1 # return res - (cnt == 1)
                
                for unlocked in unlocks[course]:
                    numOfPre[unlocked] -= 1
                    
                    #for i in range(n): #   if nums[i] == 0: 
                    #     res = max(res, last + cur) #      last, cur = cur, 0 #     cnt += 1 # else: 
                    #      cur += 1 
                    # return res - (cnt == 1)
                    
                    if numOfPre[unlocked] == 0:
                        heapq.heappush(added, (-len(unlocks[unlocked]), unlocked))

                        
                        #for i in range(n): 
                        #   if nums[i] == 0: #     res = max(res, last + cur) #      last, cur = cur, 0 #     cnt += 1 # else: #      cur += 1 
                        # return res - (cnt == 1)
                        
            count += 1
            for item in added:
                heapq.heappush(heap, item)

                
                # exit 
                
        return count