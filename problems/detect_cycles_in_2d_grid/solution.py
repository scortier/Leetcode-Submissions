class Solution(object):
    def containsCycle(self, grid):
        
        # griding the array 
        
        R,C = len(grid), len(grid[0])
        
        # new defs
        
        def DFS(r,c,length,seen):
            char = grid[r][c]
            grid[r][c] = '$'
            
            # for looping 
            
            for newr,newc in [[r+1,c],[r-1,c],[r,c+1],[r,c-1]]:
                # if looping
                
                if 0<=newr<R and 0<=newc<C:
                    
                    # if looping
                    
                    if (newr,newc) in seen and length-seen[(newr,newc)]+1>=4:
                        # exit
                        
                        return True
                    if grid[newr][newc]==char:
                        
                        # length and one
                        
                        seen[(newr,newc)] = length+1
                        if DFS(newr,newc,length+1,seen):
                            
                            # exit
                            
                            return True
                        
                        #exit
                        
            return False
        
     
    
    # TEST CASES
        
        for i in range(R):
            
            # looping
            
            for j in range(C):
                
                # if looping
                
                
                # dfs
                
                if grid[i][j] != '$' and DFS(i,j,1,{(i,j):1}):
                    #exit 1
                    
                    return True
                
                # exit 0
        return False