class Solution:
    def canReach(self, arr: List[int], start: int) -> bool:
        visited, q = set(), set([start])                          #Inialize visited set which is empty and queue set which contains only start index. 
        while q:                                                  #BFS.
            nextq = set()                                         #Initialize next queue set.
            visited |= q                                          #Union visited set with q set so all index in q are visited.
            for x in q:                                           #Iterate through queue set.
                if not arr[x]:                                    #If the value in current index is 0, return true.
                    return True
                right, left = x + arr[x], x - arr[x]              #Get the indexes after jump right and jump left.
                if right < len(arr) and right not in visited:     #If jump right to an unvisited index, add the new index to next queue.
                    nextq.add(right)
                if left >= 0 and left not in visited:             #If jump right to an unvisited index, add the new index to next queue.
                    nextq.add(left)
            q = nextq                                             #Replace queue with next queue.
        return False 