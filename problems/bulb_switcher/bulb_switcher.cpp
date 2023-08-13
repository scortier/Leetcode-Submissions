class Solution {
public:
    int minFlips(string s) {
	int i,n;
	string ns="0";
	
	n=s.length();
	int ans=0;
	for(i=0;i<n;i++)
	{
		string x=s.substr(i,1);
		if(ns != x)
		ans++;
		ns=x;
	}
	return ans;
    }
};
