class Solution {
    
    // public class
    
    public int countGoodTriplets(int[] arr, int a, int b, int c) 
    {
        
        // init counter
        
        int count = 0;
        
        // for loop
        for (int i = 0; i< arr.length-2; i++)
        {
            
            // lenght of array - 1
            
            for (int j = i + 1; j < arr.length-1; j++)
            {
                
                // lenght of array
                
                for (int k = j + 1; k < arr.length; k++)
                {
                    
                    // if loop 
                    
                    if (Math.abs(arr[i] - arr[j]) <= a
                        
                        // and
                        
                    && Math.abs(arr[j] - arr[k]) <= b
                        
                        // and
                        
                    && Math.abs(arr[i] - arr[k]) <= c) 
                    {
                        
                        // ++ counter
                        
                        count++;
                    }
                    
                    // end
                }
                
                //end
            }
            
            // end
        }
        
        // exit
        
        return count;
    }
}

