class Solution {
public:
    int minDifference(vector<int>& v) {

	int n,i,x;
        n=v.size();
	vector<int> t;
	sort(v.begin(),v.end());
	
	int ans=INT_MAX;
	if(n<=4)
	return 0;
	else{
	ans=min(min(v[n-1]-v[3],v[n-2]-v[2]),min(v[n-3]-v[1],v[n-4]-v[0]));
	return ans;
}
    }
};
