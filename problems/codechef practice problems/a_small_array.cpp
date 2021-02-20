#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void max_sub_sum(float a[],int n,int x)
{
	int mx_sum=a[0],str=0,end=0,i,res=a[0];
	for(i=1;i<n;i++)
	{
		mx_sum=max(a[i],mx_sum+a[i]);
		if(res<mx_sum)
		{
			res=mx_sum;
			end=i;
		}
	}
	str=end;

	while(str>=0)
	{
		res-=a[str];
		if(res==0)
		break;
		str--;
	}
//	cout<<str<<" "<<end<<endl;
	for(i=str;i<=end;i++)
	a[i]=float(a[i]/x);
	
}

int main()
{
	int t,n,i,x;
	cin>>n>>x;
	float a[n],sum=0;
	for(i=0;i<n;i++)
	cin>>a[i];
	max_sub_sum(a,n,x);
	for(i=0;i<n;i++){
//	cout<<a[i]<<" ";
	sum+=a[i];}
	cout<<sum;
	return 0;
}
