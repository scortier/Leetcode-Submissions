class Solution {
public:
    int repeatedNTimes(vector<int>& v) {
    int n,i,x;
	n=v.size()/2;
	map<int,int> mp;

	for(i=0;i<2*n;i++)
	{
        x=v[i];
		mp[x]++;
	}
	int ans;
	map<int,int> :: iterator it;
	for(it=mp.begin();it!=mp.end();it++)
	{
		if(it->second==n)
		{
			ans=it->first;
			break;
		}
	}
	return ans;
    }
};
