class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {

        vector< pair <int,int> > vect;
        int count=0;
        for(int i=0;i<mat.size();i++)
        {
            count=0;
            for(int j=0;j<mat[i].size();j++)
            {
                if(mat[i][j]==1)
                {
                    count++;
                }
            }
            vect.push_back(make_pair(count,i));
        }
        sort(vect.begin(),vect.end());
        vector<int>res;
        for(int i=0;i<k;i++)
        {
            res.push_back(vect[i].second);
        }
        return res;
    }
};