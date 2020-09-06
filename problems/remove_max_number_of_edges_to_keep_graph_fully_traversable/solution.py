class Solution:
    def maxNumEdgesToRemove(self, n: int, edges: List[List[int]]) -> int:
        
        # DP 
        
        A = [0] * (n + 1)
        B = [0] * (n + 1)
        
        # merging
        
        def merge(fu, x, y):
            if x == y: return
            fu[x] = y
        
        # parent function and x
        
        def parent(fu, x):
            p = x
            
            # while loop
            
            while fu[p] != 0:
                p = fu[p]
        
        # while loop
        
            while x != p:
                x2 = fu[x]
                fu[x] = p
                x = x2
                
                # exit
                
            return p

        edges = [tuple(x) for x in edges]
        
        # sorting
        edges.sort(reverse=True)
        c = 0
        
        # for looping
        
        for t, x, y in edges:
            if t == 3:
                
                # p1 p2 p3 p4
                
                p1 = parent(A, x)
                p2 = parent(A, y)
                p3 = parent(B, x)
                p4 = parent(B, y)
                
                # if loop
                
                if (p1 != p2) or (p3 != p4):
                    c += 1
                    
                    # merge
                    
                    merge(A, p1, p2)
                    merge(B, p3, p4)
            
            # else if 
            
            elif t == 1:
                p1 = parent(A, x)
                p2 = parent(A, y)
                
                # if loop
                if p1 != p2:
                    c += 1
                    
                    # exit
                    
                    merge(A, p1, p2)
                
                # else condition
                
            else:
                p1 = parent(B, x)
                p2 = parent(B, y)
                
                # if looping
                
                if p1 != p2:
                    c += 1
                    merge(B, p1, p2)
        
         # p0
        p0 = parent(A, 1)
        p1 = parent(B, 1)
        
        # for looping
        
        for i in range(1, n + 1):
            p = parent(A, i)
            
            # -1
            
            if p != p0: return -1
            p = parent(B, i)
            
            # -1
            if p != p1: return -1
        
        # answer
        
        ans = len(edges) - c
        
        # exit answer
        
        return ans