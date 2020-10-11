class Solution {
public:
    // bool function
    
	bool checkPalindromeFormation(const string &a, const string &b) {
		return _checkPalindromeFormation(a, b) || _checkPalindromeFormation(b, a);
	}
    
    // bool function with consts strings
    

	bool _checkPalindromeFormation(const string& a, const string& b) {
		int n = a.size();
		bool oddN = n % 2 == 1;
        
        // vector arr 
        
		vector<bool> midPaliA(n + 1), midPaliB(n + 1);
        
        // elif loops 
        
		if (oddN) {
			int mid = n / 2;
            
            // for cond.
            
			for (int i = 0; i <= n / 2; i++) {
				if (a[mid + i] == a[mid - i]) {
					midPaliA[i * 2 + 1] = true;
				}
                // 0
                
				else {
					break;
				}
			}
            // for looping 
            
			for (int i = 0; i <= n / 2; i++) {
				if (b[mid + i] == b[mid - i]) {
					midPaliB[i * 2 + 1] = true;
				}
				else {
					break;
				}
			}
		}
        
        // else condition 
        
		else {
			midPaliA[0] = midPaliB[0] = true;
			int mid = n / 2;
            
            // maths 
            
			for (int i = 1; i <= n / 2; i++) {
				if (a[mid + i - 1] == a[mid - i]) {
					midPaliA[i * 2] = true;
				}
				else {
					break;
				}
			}
            
            // for looping 
            
			for (int i = 1; i <= n / 2; i++) {
                
                // logic 
				if (b[mid + i - 1] == b[mid - i]) {
					midPaliB[i * 2] = true;
				}
                // else condition 
                
				else {
					break;
				}
			}
		}
        // check
         
		if (midPaliA[n]) return true;
        
        // for looping 
        
		for (int i = 0; i <= n / 2; i++) {
			if (a[i] == b[n - 1 - i]) {
                
                // prod 
                
				int midLen = n - 2 * (i + 1);
				if (midPaliA[midLen] || midPaliB[midLen] ) return true;
			}
            // else condition 
            
			else {
				break;
			}
            // end
		}
        // exit 0
        
		return false;
	}
    // end
};
// end