class Solution {
public:
	int unhappyFriends(int n, const vector<vector<int>>& preferences, const vector<vector<int>>& pairs) { // vector array
		unordered_map<int, int> pairsMap; // mapping
        
        // for looping
        
		for (const auto& p : pairs) {
			pairsMap[p[0]] = p[1];
			pairsMap[p[1]] = p[0];
		}
        // counter 
        
		int count = 0;
        // pairs 
        
		for (const auto& p : pairs) {
			int x = p[0], y = p[1];
			bool unhappy = false;
            
            // for looping
            
			for (const auto& q : pairs) {
				int u = q[0], v = q[1];
				if (u == x && v == y) continue;
                
                // if looping
                
				if (isUnhappy(preferences, x, y, u, v) || isUnhappy(preferences, x, y, v, u)) {
					count++;
					break;
				}
			}
            
            // pairs
            
			for (const auto& q : pairs) {
				int u = q[0], v = q[1];
				if (u == x && v == y) continue;
                
                // if looping
                
				if (isUnhappy(preferences, y, x, u, v) || isUnhappy(preferences, y, x, v, u)) {
					count++;
					break;
				}
                // end
			}
            // end
		}
        // exit
        
		return count;
	}
    
    // pvt class
    
private:
	bool isUnhappy(const vector<vector<int>>& preferences, int x, int y, int u, int v) {
        
        // findOrder
        
		return findOrder(preferences[u], x) < findOrder(preferences[u], v) && findOrder(preferences[x], u) < findOrder(preferences[x], y);
	}
    // vector findorder

	int findOrder(const vector<int>& pref, int x) {
        // for looping
        
		for (int i = 0; i < pref.size(); i++) {
            // arr
            
			if (pref[i] == x) return i;
		}
        
        // exit -1
        
		return -1;
	}
    // end
};

// end