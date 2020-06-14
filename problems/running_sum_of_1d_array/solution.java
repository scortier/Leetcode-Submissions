// Solution 
class Solution 
{
    
    // intgser sum
    
    public int[] runningSum(int[] nums) 
    {
        
        // loop
        
        for (int i = 1; i <nums.length ; i++)
            
            //logical execution 
        {
            
            // answwrer
            
            nums[i]=nums[i]+nums[i-1];
            
            // end
            
        }
        
        // exit
        
        return nums;
    }
    
    // end
}

// DONE