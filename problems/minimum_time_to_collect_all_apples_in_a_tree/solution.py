from collections import defaultdict
class Solution(object):
    def minTime(self, n, edges, hasApple):
        """
        :type n: int
        :type edges: List[List[int]]
        :type hasApple: List[bool]
        :rtype: int
        """
        
        # graph values default conftion 
        
        graph = defaultdict(list)
        # for condition for no of edges
        
        for edge in edges:
            # true false bool
            
            graph[edge[0]].append(edge[1])
            graph[edge[1]].append(edge[0])
            # inittail setting
            
        visited = set()
        # rooting values 
        
        def dfs(root):
            # definign intiatalvalues from 0
            res = 0
            
            # if-else looping condition 
            
            if root not in visited:
                # returning values
                
                visited.add(root)
                # looping for-while conditon 
                for nbr in graph[root]:
                    # returning root res , incr. with each
                    res += dfs(nbr)
                    # if logical execution 
                if res or hasApple[root]:
                    # incr. each with 2 
                    res += 2
                    
                    #returning result
            return res
        # returning and printing answer of max no. of ways values
        return max(0, dfs(0) - 2)