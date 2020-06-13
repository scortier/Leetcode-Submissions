// solution starts 


class Solution
{
    
    // new public class
    
    public int[] finalPrices(int[] prices) 
    {
        
        // loopinmg the statements
        
        if(prices.length == 1)
        {
            
            //a ns 
            
            return prices;
        }
        
        
        // loopijg mpre
        
        for(int i = 0; i < prices.length - 1; i++)
        {
            
            // for loos
            
            for(int j = i + 1; j < prices.length; j++)
            {
                
                // mor eif lkoos 
                
                if(prices[i] >= prices[j])
                {
                    
                    // rraya ans and brak 
                    
                    prices[i] = prices[i] - prices[j];
                    break;
                    
                    // nd
                }
                
                // end
                
            }
            
            // end
            
        }
        
        // exit 1
        return prices;
    }
    
    // end
    
}

// end 



// testing

class Test
{
    
    // testing str
    
    public static void main(String[] args) 
    {
        
        // new input array 
        
        int prices[] = new int[]{10,1,1,6};
        
        // input in soln 
        
        Solution fpd = new Solution();
        
        // new vars & ints 
        
        int res[] = fpd.finalPrices(prices);
        
        
        // looping f00r 
        
        
        for(int i = 0; i < res.length; i++)
        {
            
            // answerr 
            
            System.out.print(res[i] + " ");
        }
        
        // end
        

    }
    
    // end
    
}

// END 