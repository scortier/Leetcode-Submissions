class Solution {
public:
	bool carPooling(vector<vector<int>>& trips, int capacity) {
		std::vector<int> gap(1001, 0);

		for (int idx = 0;idx< trips.size(); ++idx) {

			gap[trips[idx][1]]+=trips[idx][0];
			gap[trips[idx][2]]-=trips[idx][0];
		}
		int cur_size = 0;
		for (int idx = 0; idx < gap.size(); ++idx) {
			cur_size += gap[idx];
			if (cur_size > capacity) {
				return false;
			}
		}
		return true;
	}
};