# new solution
# AUTHOR : siddhant Khar

class Solution(object):
    def isMatch(self, s, p):
        """
        e.g. 
        abbc
        ab*c
        match a-a, move both (bbc, b*c)
        either skip b* & move regex (bbc,c), or match 1 character & move string (bc,b*c)
        
        If there is no *, as usual check first character move to next in both string & regex
        If there is a *, we can either skip the regex and not match any characters in string,
        or match first character and move to next in string without moving regex
        """
        

        def regexMatch_(s, r):
            if r == len(regex):                     # if regex is ''
                return s == len(string)             # then string '' = Match, string 'a' = No Match
            
            star = r+1 < len(regex) and regex[r+1] == '*'       # regex has a*
            
            if s == len(string):                    # if string has ended and regex contains 'a*b*c*..', it can still match
                return star and regexMatch_(s,r+2)
            
            first = regex[r] == '.' or regex[r] == string[s]    # first letter matches
            
            
            # if else liooping 
            
            
            if not star:                                # 'ab' & 'ac'
                return first and regexMatch_(s+1,r+1)   # a & a match, move to next in both
            elif star:                                  # '' & 'a*b*' . 'aaa' & 'a*aaa' - skip regex in both
                
                # returning baluer
                 
                return regexMatch_(s,r+2) or (first and regexMatch_(s+1,r))     # 'aab' & 'a*b' - match first in string
            

        string, regex = s,p

        return regexMatch_(0,0)