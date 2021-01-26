class Solution {
    const vector<vector<int>> dirs {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int m = heights.size(), n = heights[0].size();
        vector<vector<int>> dist(m, vector<int>(n, INT_MAX));
        dist[0][0] = 0;

        // custom comparator to sort set based on distance
        auto comp = [](auto a, auto b) { return a[0] < b[0]; };
        set<vector<int>> s;
        s.insert({0, 0, 0});    // stores {distance, row, column}

        while(!s.empty()) {
            // pull out cell with min distance
            auto it = s.begin();
            int d = (*it)[0], r = (*it)[1], c = (*it)[2];
            s.erase(it);

            // if reached bottom right cell
            if(r == m-1 and c == n-1)   return d;

            for(auto dir: dirs) {
                int nr = r + dir[0], nc = c + dir[1];

                if(nr >= 0 and nr < m and nc >= 0 and nc < n) {
                    int newDist = max(d, abs(heights[r][c] - heights[nr][nc]));

                    if(newDist < dist[nr][nc]) {
                        dist[nr][nc] = newDist;
                        s.insert({newDist, nr, nc});
                    }
                }
            }
        }
        return 0;
    }
};
