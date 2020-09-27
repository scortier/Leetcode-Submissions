class Solution:
    def maximumRequests(self, n: int, requests: List[List[int]]) -> int:
        
        # init vars
        

        n1 = 0
        degree = [0] * n
        reqs = []
        
        # for looping 
        
        for req in requests:
            
            # iff 
            
            if req[0] == req[1]:
                n1 += 1
            else:
                # append 
                
                reqs.append(req)
                
                # apply
                
        m = len(reqs)
        self.res = n1
        
        # new def 
        
        def helper(i, num):
            if i == m:
                return
            
            # for looping
             # check range 
                
            for k in range(i, m):
                f, t = reqs[k]
                
                ## incrr 
                
                degree[f] += 1
                # decr 
                
                degree[t] -= 1
                num += 1
                
                # checking range 
                
                if all(degree[i] == 0 for i in range(n)):
                    
                    # maximum 
                    
                    self.res = max(self.res, n1 + num)
                helper(k + 1, num)
                
                # decr 
                
                degree[f] -= 1
                
                # incr
                
                degree[t] += 1
                num -= 1
                # exit
                
            return
        
        # exit 
        
        helper(0, 0)
        
        #exit 
        
        
        return self.res

