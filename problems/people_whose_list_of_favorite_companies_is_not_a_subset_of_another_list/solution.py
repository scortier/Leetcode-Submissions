import collections

# new classs

class Solution(object):
    
    # define 
    
    def peopleIndexes(self, favoriteCompanies):
        """
        :type favoriteCompanies: List[List[str]]
        :rtype: List[int]
        """
        
        # new vars 
        
        company2id = {}
        person2companiesMask = []
        
        # for looping 
        
        for favList in favoriteCompanies:
            mask = 0
            
            # no. of loopss 
            
            for i, company in enumerate(favList):
                mask |= 1 << company2id.setdefault(company, len(company2id))
            person2companiesMask.append(mask)
            
            # sorted 
            
        sortedPersonIds = [p for p, lst in sorted(enumerate(favoriteCompanies), cmp=lambda a, b: len(a[1]) - len(b[1]))]
        res = []
        
        # for looping 
        
        for i in xrange(len(sortedPersonIds)): 
            
            # false 
            
            fail = False
            myPersonId = sortedPersonIds[i]
            myMask = person2companiesMask[myPersonId]
            
            # j loop 
            
            for j in xrange(i + 1, len(sortedPersonIds)):
                otherPersonId = sortedPersonIds[j]
                otherMask = person2companiesMask[otherPersonId]
                
                # if else looping 
                
                if myMask & otherMask == myMask:
                    fail = True
                    break
                    
                    # another loop 
                    
            if not fail:
                res.append(myPersonId)
                
                # retuern sorted value 
                
        return sorted(res)