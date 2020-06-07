// Public cl@ss 


class Solution {
    
    // shufllinh
    
        public int[] shuffle(int[] nums, int n) 
        {
            
            // loops 
            
            if (nums == null) 
                
                // returning ans 
            {
                
                // nvll pointer 
                
                return null;
            }
            
            int[] answer = new int[2 * n];
            
            // for loop 
            
            for (int i = 0; i < n; i++)
            {
                
                // answer c
                
                answer[2 * i] = nums[i];
                
                // printing answer 
                
                answer[2 * i + 1] = nums[i + n];
            }
            
            // returnign answer 
            
            return answer;
            
            // end
        }
    
    // exit
    
    }

// soln ends