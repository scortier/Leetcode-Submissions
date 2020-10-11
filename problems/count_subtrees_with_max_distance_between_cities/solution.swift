class Solution {
    // function 
    
    func countSubgraphsForEachDiameter(_ n: Int, _ edges: [[Int]]) -> [Int] {
        
        // variable 
        
        var adj = [Set<Int>](repeating: .init(), count: n + 1)
        // for looping 
        
        for e in edges {
            adj[e[0]].insert(e[1])
            adj[e[1]].insert(e[0])
        }

        
        // fucntion 
        
        func isConn(_ av: Set<Int>) -> Bool {
            if av.isEmpty { return false }

            
            // new variables 
            
            var visited = [Bool](repeating: false, count: n + 1)
            
            // for looping 
            
            func dfs(_ u: Int) {
                visited[u] = true
                for v in adj[u] where av.contains(v) && !visited[v] {
                    dfs(v)
                }
            }
            
            // dfs 
            

            dfs(av.first!)
            return av.allSatisfy { visited[$0] }
        }
        
        // new variables
         

        var dist = [[Int]](repeating: .init(repeating: Int.max / 3, count: n + 1), count: n + 1)
        
        // for looping 
        
        for i in 1...n { dist[i][i] = 0 }
        for e in edges {
            dist[e[0]][e[1]] = 1
            dist[e[1]][e[0]] = 1
        }
        
        // for looping 
        
// complex
        

        for k in 1...n {
            for i in 1...n {
                for j in 1...n {
                    
                    // DP 
                    
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j])
                }
            }
        }
        
        // variables
        


        var res = [Int](repeating: 0, count: n - 1)

        for state in 0..<(1 << n) {
            
            // set 
            
            var av = Set<Int>()
            
            // for looping 
            
            for i in 0..<n {
                if state & (1 << i) != 0 { av.insert(i + 1) }
            }
            
            // 1
            
            guard av.count >= 2 && isConn(av) else { continue }

            var maxDist = 0
            
            // for looping 
            
            for i in 1...n where av.contains(i) {
                for j in 1...n where av.contains(j) {
                    maxDist = max(maxDist, dist[i][j])
                }
            }
            
            // answer 
            

            res[maxDist - 1] += 1
        }
        
        // exit 
        

        return res
    }
    // end 
    
}