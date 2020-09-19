class Solution {

    public static int sumOddLengthSubarrays(int[] arr) {
        // zero \0
        if (arr == null) {
            return 0;
        }

        int step = 1;
        int sum = 0;
        
        // while loop 
        
        while (step <= arr.length) {
            // iterate
            
            for (int i = 0; i < arr.length; i++) {
                
                // greater 
                
                if (i + step > arr.length) {
                    continue;
                }
                
                // sum up all
                
                for (int k = 0; k < step; k++) {
                    sum += arr[i + k];
                }
            }
            
            // by 2 +
            
            step += 2;
        }
        
        // exit sum 
        

        return sum;
    }
}