class Solution {
public:
	int numPairsDivisibleBy60(vector<int>& time) {
		int bucket[61] = {}; //One extra space for easier access
		int res = 0;

		for (int n : time) {
			int remainder = n % 60;
			res += bucket[60 - remainder];

			remainder = !remainder ? 60 : remainder; //	If remainder is 0, set to 60. So a new pair can find this one
			++bucket[remainder];
		}
		return res;
	}
}; 