// defs 

#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size())

// defs add 

int toInt(char c) {
	return c - '0';
}

// fun
int change(string time) {
	int res = (toInt(time[0]) * 10 + toInt(time[1])) * 60 + toInt(time[3]) * 10 + toInt(time[4]);
	return res;
}

// main solution 

class Solution {
public:
    // vector str
    
    vector<string> alertNames(vector<string>& keyName, vector<string>& keyTime) {
        // mapping 
        
		map <string, vector<int>> mp;
        int n;
		n = SZ(keyName);
        // for loop 
        
		for (int i = 0; i < n; ++i) {
			string name = keyName[i];
			string time = keyTime[i];
            // if loop
            
			if (mp.count(name) == 0) mp[name] = vector<int>();
			mp[name].push_back(change(time));
		}
        
        // vector result 
        
		vector <string> res;
		for (auto &it : mp) {
            // sorting 
            
			sort(all(it.se));
			int ok = 0;
            
            // for looping 
            
			for (int i = 2; i < SZ(it.se); ++i) {
                // if looping 
                
				if (it.se[i] - it.se[i - 2] <= 60) {
					ok = 1;
					break;
				}
                // end
			}
            // end
			if (ok) res.push_back(it.fi);
		}
        
        // sorting 
        
		sort(all(res));
        // answer 
        
		return res;
    }
    // end 
    
};
