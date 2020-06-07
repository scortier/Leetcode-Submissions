// class solution

class Solution {
    
    // getting strong intvegre
    
        public int[] getStrongest(int[] arr, int k) 
        {
            // i floops 
            
            if (arr == null)
            {
                
                // nulll pointer 
                
                return null;
            }
            
            
            // sorting array 
            
            Arrays.sort(arr);
            
            
            // loguical execution
            
            int mid = arr[(arr.length - 1) / 2];
            
            
            // print ingh answer 
            
            int[] answer = new int[k];
            
            // listing array 
            
            List<Integer> sortList = Arrays
                
                /// arrauyas 
                
                    .stream(arr)
                
                // boxing aaray 
                
                    .boxed()
                
                // arraya sortrrey
                
                    .sorted(
                
                // 
                            (num, num1) -> {
                                
                                // logical executio n 
                                
                                int a1 = Math.abs(num - mid);
                                
                                // logical executio n
                                
                                int a2 = Math.abs(num1 - mid);
                                
                                // looping if 
                                 
                                if (a1 != a2)
                                {
                                    
                                    // answerr 
                                    
                                    return a2 - a1;
                                }
                                
                                // else loop 
                                
                                else 
                                {
                                    
                                    // answer r
                                    
                                    return num1 - num;
                                }
                                
                                // end lop 
                                
                            }
                
                // endd
                 
                    )
                
                // cioluittvv  
                
                    .collect(Collectors.toList());
            
            // for loloop 
            
            for (int i = 0; i < k; i++) 
            {
                
                // answrer 
                
                answer[i] = sortList.get(i);
                
                //e ndd 
                
            }
            
            // fian l asnwrer 
            
            return answer;
            
            //e xirt 
            
        }
    
    // end 
    
    }

// exit 

// soln ends
