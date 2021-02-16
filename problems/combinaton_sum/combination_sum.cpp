class Solution {
public:
    
void no_of_sum(vector<int> &a,int target,vector<int> &x,vector<vector<int> > &ans,int j)
{
	if(target==0)
	ans.push_back(x);

	for(int i=j;i<a.size();i++)
	{
		int temp=target-a[i];
		if(temp>=0)
		{
			x.push_back(a[i]);
			no_of_sum(a,temp,x,ans,i);
			x.pop_back();
		}
	}
}
    
    vector<vector<int>> combinationSum(vector<int>& a, int tg) {
vector<vector<int> > ans;
vector<int> v;
	no_of_sum(a,tg,v,ans,0);
	return ans;
}
    
};
