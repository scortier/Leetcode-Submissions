class Solution {
    // DEFAULT 
    
    public double maxProbability(int n, int[][] edges, double[] succProb, int start, int end) {
        
        // mapping 
        
        Map<Integer,Map<Integer,Double>> graph = new HashMap<>();
        
        // for loop 
        
        for(int i = 0;i<n;i++)
            graph.put(i,new HashMap<>());
        int size = edges.length;
        
        // for loop 
        
        for(int i = 0;i<size;i++){
            int from = edges[i][0];
            int to = edges[i][1];
            // graphs 
            
            graph.get(from).put(to,succProb[i]);
            graph.get(to).put(from,succProb[i]);
        }
        
          /*
        
         public static void main(String[] args) {
        Path_with_Maximum_Probability test = new Path_with_Maximum_Probability();
        int[][] edges = {{0,1},{1,2},{0,2}};
        double[] succProb = {0.5,0.5,0.2};
        System.out.println(test.maxProbability(3,edges,succProb,0,2));
    }
    */
        
        // decimal 
        
        double[] pro = new double[n];
        
        // mapping 
        
        Map<Integer,Double> map = graph.get(start);
        Map<Integer,Double> queue = new HashMap<>();
        queue.put(start,1.0);
            
        // while loop 
        
        
        /*
        
         public static void main(String[] args) {
        Path_with_Maximum_Probability test = new Path_with_Maximum_Probability();
        int[][] edges = {{0,1},{1,2},{0,2}};
        double[] succProb = {0.5,0.5,0.2};
        System.out.println(test.maxProbability(3,edges,succProb,0,2));
    }
    */
        while (!queue.isEmpty()){
            
            /// ammppin g
            
            Map<Integer,Double> temp = new HashMap<>();
            
            // for looping 
            
            for(Map.Entry<Integer,Double> entry:queue.entrySet()){
                int cur = entry.getKey();
                double gl = entry.getValue();
                Map<Integer,Double> next = graph.get(cur);
                
                // for looping 
                
                  /*
        
         public static void main(String[] args) {
        Path_with_Maximum_Probability test = new Path_with_Maximum_Probability();
        int[][] edges = {{0,1},{1,2},{0,2}};
        double[] succProb = {0.5,0.5,0.2};
        System.out.println(test.maxProbability(3,edges,succProb,0,2));
    }
    */
                
                for(Map.Entry<Integer,Double> nextMap:next.entrySet()){
                    int nextIndex = nextMap.getKey();
                    double nextgl = nextMap.getValue();
                    
                    // if loops 
                    
                    if(nextgl*gl>pro[nextIndex]){
                        pro[nextIndex]=nextgl*gl;
                        temp.put(nextIndex,pro[nextIndex]);
                    }
                    
                    // end 
                }
                
                // end 
            }
            
            //e dn 
            
            queue = temp;
        }
        
        // exit 
        
        return pro[end];
    }
    // end
}