class Solution:
    def findSmallestSetOfVertices(self, n: int, edges: List[List[int]]) -> List[int]:
        
        # init array 
        
        indegree = [0]*n
        
        # for looping 
        
        for i in edges:
            
            # add += 1
            
            indegree[i[1]] += 1
            
            # exit
            
        return [ idx for idx,i in enumerate(indegree) if i == 0 ]