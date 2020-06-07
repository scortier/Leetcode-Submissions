// paint hour se soltu \

public class Solution {
    
    // new inrtgers
    
    // new ints and target 
    
    public int minCost(int[] houses, int[][] cost, int m, int n, int target) 
    {
        
        // giving new answer
        
        int answer = -1;

        // ints array 

        Integer[][][] dp = new Integer[m][target+1][n];

        // for looping 

        for (int c = 0; c < n; c++) 
        {

            // new ints minimum 

            int r = min(houses, cost, m, n, 0, c, target, dp);

            // looping 

            if (r != -1)
             {

                // mor eloop 

                if (answer == -1)
                {

                    // answree 

                    answer = r;
                } 

                // else looping 

                else
                {

                    // answer 
                    //dsjkfd

                    answer = Math.min(answer, r);


                }

                //e dnd

            }

            // end 
        }

        // exit

        return answer;
    }

    // new pvt claasss


    private int min(int[] houses, int[][] cost, int m, int n, int h, int c, int t, Integer[][][] dp) 
    {

        // if looping 

        if (t <= 0) 
        {

            // answer 

            return -1;
        }

        // if ooping 

        if (dp[h][t][c] != null)
        {

            // answerr 

            return dp[h][t][c];
        }

        // answer 


        int answer = -1;

        // loop 

        if (h == m-1) 
        {

            // loop 

            if (t == 1) 
            {

                // loop

                if (houses[h] == 0) 
                {
                    // answer

                    answer = cost[h][c];


                }

                // loops 

                else if (houses[h]-1 == c) 
                { 
                    // naswerr \

                    answer = 0;
                }
            }

            // array 

            dp[h][t][c] = answer;

            // ans 

            return answer;
        }

        // loos
         
        if (m-h < t) {

            // array anss
             
            dp[h][t][c] = answer;

            // anss
             
            return answer;
        }

        // end 


        // llooping 

        if (houses[h] != 0) 
        {
            // llooping 

            if (houses[h]-1 == c) 
            {
                // llooping 

                for (int nc = 0; nc < n; nc++) 
                {

                    // new intgeres

                    int r = min(houses, cost, m, n, h+1, nc, nc == c ? t : t-1, dp);

                    // llooping 

                    if (r != -1) 
                    {

                        // llooping 

                        if (answer == -1) 
                        {

                            // answer 

                            answer = r;
                        } 

                        /// // llooping  

                        else 
                        {

                            // answer 

                            answer = Math.min(answer, r);
                        }

                        // end
                    }

                    // end
                     
                }

                // end
                 
            }

            // anray vanswe

            dp[h][t][c] = answer;


            // answere 

            return answer;
        }

        // // llooping 


        for (int nc = 0; nc < n; nc++) 
        {

            /// new intgss 

            int r = min(houses, cost, m, n, h+1, nc, nc == c ? t : t-1, dp);

            // llooping 


            if (r != -1) 
            {

                // llooping 

                if (answer == -1) 
                {

                    // answer 

                    answer = r + cost[h][c];
                } 

                // llooping 

                else 
                {

                    // ansxwetr 

                    answer = Math.min(answer, r + cost[h][c]);
                }

                //e dnd \
            }

            //e ndd \
        }

        // arra ansaser 

        dp[h][t][c] = answer;

        // retruning answwer 

        return answer;

        //e dn d

    }

    // exit

}

// solution endds