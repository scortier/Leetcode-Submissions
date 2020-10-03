// Defs Started

#define fi first
#define se second
#define SZ(x) ((int)(x).size())
#define mkp make_pair

// sort

#define all(x) (x).begin(), (x).end()

// long long  and pair 

using ll = long long;
using pLI = pair<ll, int>;
constexpr int N = 1e5 + 10;
// Defs Ended

class Solution {
public:
    // vector 
    
    vector<int> busiestServers(int k, vector<int>& arrival, vector<int>& load) {
        
        // vector answer 
        
		vector <int> res;
        int n,f[N];
		n = SZ(arrival);
		set <int> se; 
        // for loop 
        
		for (int i = 0; i < k; ++i) {
			se.insert(i);
		}
        
        // memset 
        
		memset(f, 0, sizeof f);
        
        // STL impl
        
		priority_queue <pLI, vector <pLI>, greater<pLI>> pq;
		for (int i = 0; i < n; ++i) {
			ll now = arrival[i];
            
            // while loop 
            
			while (!pq.empty() && pq.top().fi <= now) {
                
                // insert & pop
                
				se.insert(pq.top().se);
				pq.pop();
			}
            
            // flush 
            
			if (se.empty()) continue;
			int x = i % k;
            
            // lower bound
			auto pos = se.lower_bound(x);
            
            // start
            
			if (pos == se.end()) pos = se.begin();
            
            // iterating 
            
			++f[*pos];
            
            // push 
            
			pq.push(pLI(now + load[i], *pos));
			se.erase(pos);
		}
        // maximum 
		int Max = 0;
        
        // for loop[ing 
        
		for (int i = 0; i < k; ++i) {
            // maximum 
            
			if (f[i] > Max) {
                
                // flush 
                
				res.clear();
				Max = f[i];
                
                // answer 
                
				res.push_back(i);
			} else if (f[i] == Max) {
                // adding more 
                
				res.push_back(i);
			}
            // end
		}
        // ans
        
		return res;
    }
    // end
};
// exit 


