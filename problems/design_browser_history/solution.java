// public solution soln 


class BrowserHistory {
    
    // listing out all the stringd
    
        List<String> urls;
    
    // indexing all 
    
        int index;

    
    // homepage 
    
        public BrowserHistory(String homepage) {
            
            // indexing to zerr o
            
            int index = 0;
            
            // newe listing aaray 
            
            urls = new ArrayList<>();
            
            // andding nwew home page 
            
            urls.add(homepage);
        }
    
    // stringing url 
    

        public void visit(String url) {
            
            // if loopoing 
            
           
            if (index < urls.size())
            {
                
                // answer 
                
                
                // sublisting
            
                urls = urls.subList(0, index + 1);
                    
                    // end 
                    
            }
            
            // incr by one 
            
            index++;
            
            // adding new uyrl v
            
            urls.add(url);
        }
    
    // end
     
    // idnexing 
    

        public String back(int steps) {
            
            // indexing 
            
            index = index - steps;
            
            // if loopuig 
            
            if (index < 0) 
            {
                
                // init
                
                index = 0;
            }
            
            // answerr 
            
            return urls.get(index);
        }

    
    // last int 
    
        public String forward(int steps) {
            
            // adding  of index and furtht ee rsteps 
            
            
            index = index + steps;
            
            // kloopijng if sdafvsd
            
            if (urls.size() <= index)
            {
                
                // answer decr. 1 
                
                index = urls.size() - 1;
                
                // end
            }
            
            /// print answerr 
            
            return urls.get(index);
            
            //  exit
             
        }
    
    // end 
    
    }

// solution ends
