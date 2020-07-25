class Solution {
    
    // public class
    
	public int countOdds(int low, int high) 
    {
        
        // new integer
        
		int result= (high-low)/2;
        
        // looping 
        
		if(low %2 ==0 && high %2 ==0) 
        {
            
            // answer 
            
			return result;
		}
        
        // answwer +1
        
		return result+1;
    }
    
    // exit
    
	

}