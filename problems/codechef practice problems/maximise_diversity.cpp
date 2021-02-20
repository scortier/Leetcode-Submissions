#include <stdio.h>
#include <stdlib.h>
#include <set>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int t,i,n,j,k,x;
	cin>>t;
	while(t--){
	cin>>n>>k;
	multiset<long long int> st;
	vector<long long int> v;
//	vector<int> not_pre;
	for(i=0;i<n;i++)
	{
		cin>>x;
	//	st.insert(x);
		v.push_back(x);
	}
sort(v.begin(),v.end());
long long int ans=n*(n-1)/2;
	long long int cnt=1;
	for(i=1;i<n;i++)
	{if(v[i]==v[i-1])
	cnt++;
	else{
		st.insert(cnt);
		cnt=1;
	}
	}
	if(cnt>1)
	st.insert(cnt);
	for(i=0;i<k;i++)
	{
		if(st.empty())
		break;
		else{
			int y=*st.rbegin();
			st.erase(st.find(y));
			y--;
			if(y>1)
			st.insert(y);
		}
	}
	multiset<long long int> ::iterator it;
	for(it=st.begin();it!=st.end();it++)
	{
		ans-=(*it)*(*it-1)/2;
	}
	cout<<ans<<endl;
}
	return 0;
}
