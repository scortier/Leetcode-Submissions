class Solution {
 // Paste magic code in ( Control + Shift + J ) console again and hit enter. 
 public:
     int subtractProductAndSum(int n) {
        
        // Lets take initial digits sum = 0
        int digits_sum = 0;
            
        // Lets initial digits product = 1
        int digits_product = 1;
        
        // Now we will find each digit of number n 
        while ( n > 0) {
            
            // Store last digit of n
            int last_digit =  n % 10 ;
            
            // Update digit sum
            digits_sum = digits_sum + last_digit;

            //  Update product
            digits_product = digits_product * last_digit;
            
            // Removing last digit from number and continue process
            n = n/ 10;
        }
         
        // This is what we are supposed to return as result
        return digits_product - digits_sum;
    }
};
