class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector <int> m (5,0);
			for(auto &ch: text){
				if(ch == 'b') m[0]++;
				if(ch == 'a') m[1]++;
				if(ch == 'l') m[2]++;
				if(ch == 'o') m[3]++;
				if(ch == 'n') m[4]++;
			}
			m[2] /= 2;
			m[3] /= 2;
			return *min_element(m.begin(),m.end());
    }
};
