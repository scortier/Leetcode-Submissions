
// importing module 

import "fmt"


// default

func numIdenticalPairs(nums []int) int {
	ans := 0
    
    // condition 1
    
	if len(nums) < 2 {
		return ans
	}
    
    // condition 2 
    
	for i := 0; i < len(nums)-1; i++ {
        
        // condition 3
        
		for j := i + 1; j < len(nums); j++ {
            
            // condition 4
            
			if nums[i] == nums[j] {
                
                // ans 
                
				ans += 1
			}
            
            // end
		}
        
        // end
	}
    
    // answer 
    
	fmt.Print(ans)
    
    // exit 
    
	return ans
}
