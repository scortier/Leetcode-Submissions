class Solution:
    
    # defining new vars
    

    def arrangeWords(self, text: str) -> str:
        
        # inittail vals. to word
        
        words = text.split()
        
        # count 0
        
        words[0] = words[0].lower()
        
        # lenght 
        
        lengths = [len(i) for i in words]
        
        # sort an array 
        
        words = sorted(words, key=lambda x: len(x))
        
        # return value 
        
        words[0] = words[0].title()
        
        # output
        return ' '.join(words)