class Solution {
    // pvt class
    
    private class DSU{
        int[] parent;

        public DSU(int N) {
            //array
            
            parent = new int[N];
            for (int i = 0; i < N; ++i) {
                parent[i] = i;
            }
        }
        
        // public class

        public int find(int x) {
            // array
            
            if (parent[x] != x) parent[x] = find(parent[x]);
            
            // exit 
            
            return parent[x];
        }

        public void union(int x, int y) {
            parent[find(x)] = find(y);
        }
        // end
    }
    // end
    
    
    
    // public class 
    
    public int minCostConnectPoints(int[][] points) {
        if (points == null || points.length <= 1) {
            return 0;
        }
        
        // length
        
        int len = points.length;
        int[][] distances = new int[len][len];
        // int array
        
        PriorityQueue<int[]> queue = new PriorityQueue<>((a, b) -> (distances[a[0]][a[1]] - distances[b[0]][b[1]]));
        
        // for looping
        
        for (int i = 0; i < len; ++i) {
            for (int j = i; j < len; ++j) {
                
                // array logical executiuon
                
                int distance = Math.abs(points[i][0] - points[j][0]) + Math.abs(points[i][1] - points[j][1]);
                distances[i][j] = distance;
                distances[j][i] = distance;
                
                // queue mapping
                 
                queue.add(new int[]{i,j});
            }
        }
        // new lenght
        
        DSU uf = new DSU(len);
        int res = 0, count = len;
        
        // while looping 
        
        while (!queue.isEmpty() && count != 0) {
            
            // array 
            
            int[] tmp = queue.poll();
            
            // if looping
            
            if (uf.find(tmp[0]) != uf.find(tmp[1])) {
                
                // result
                
                res += distances[tmp[0]][tmp[1]];
                uf.union(tmp[0], tmp[1]);
            }
        }
        // result 
        
        return res;
    }
}