class Solution {
public:
    
bool isAP(vector<int> &a,int i,int j)
{
	int p,q;
	vector<int> temp;
	
	for(p=i;p<=j;p++)
	temp.push_back(a[p]);
	sort(temp.begin(),temp.end());
	q=temp[1]-temp[0];
	for(p=1;p<temp.size()-1;p++){
		int x=temp[p+1]-temp[p];
		if(x!=q)
		return false;
	}
	return true;
}

    vector<bool> checkArithmeticSubarrays(vector<int>& v, vector<int>& l, vector<int>& r) {

	int t,n,i,m;
	n=v.size();
	vector<bool> ans;
	m=l.size();
	for(i=0;i<m;i++)
		ans.push_back(isAP(v,l[i],r[i]));
	return ans;
    }
};
