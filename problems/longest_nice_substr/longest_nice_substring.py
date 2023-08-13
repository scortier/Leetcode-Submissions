class Solution:
    def longestNiceSubstring(self, s: str) -> str:
        n=len(s)
        ans=""
        def nice(st,end):
            t=set(s[st:end])
            for x in t:
                if(x.lower() in t)!= (x.upper() in t):
                    return False
            return True
        for st in range(n):
            for end in range(st+1,n+1):
                if nice(st,end) and end-st>len(ans):
                    ans=s[st:end]
                    
        return ans
                
                
