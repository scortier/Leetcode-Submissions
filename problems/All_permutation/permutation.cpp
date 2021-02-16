class Solution {
public:
    vector<vector<int>> permute(vector<int>& v) {
       vector<vector<int> > ans;
	sort(v.begin(),v.end());
	do{
		ans.push_back(v);
	}while(next_permutation(v.begin(),v.end()));
	return ans;
    }
};
