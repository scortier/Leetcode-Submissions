class Solution {
public:
    bool find_diff(string x,string y)
{
	int i,j,cnt=0;
	for(i=0;i<x.length();i++)
	{
		if(x[i]!=y[i])
		cnt++;
		if(cnt>1)
		return false;
	}
	if(cnt==1)
	return true;
	else
	return false;
}


    int countSubstrings(string s, string t) {
    int j,i,x,n,m,y,diff;
	n=s.length();m=t.length();
	int cnt=0;
//	cout<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
            x=i,y=j,diff=0;
		    for(;x<n && y<m && diff<2;x++,y++)
            {
                if(s[x]!=t[y])
                    diff++;
                if(diff==1)
                    cnt++;
            }
		}
	}
	
	return cnt;
    }
};
