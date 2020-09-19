class Solution {
public:
    vector<int> sol;
    void recurse(int low,int high,int place,int sum)
    {
        if(sum>high)
            return;
        if(sum>=low && sum<=high)
            sol.push_back(sum);
        int index=0;
        if(sum==0)
            index=1;
        for(int i=index;i<10;i++)
        {
           if(sum==0 || sum%10==i-1)
            {
                if(sum==0)
                {
                    recurse(low,high,1,sum*10+i);
                }  
                else
                    recurse(low,high,10,sum*10+i);
            }

        }
    }
    vector<int> sequentialDigits(int low, int high) {
        int num=0;
        recurse(low,high,0,0);
        sort(sol.begin(),sol.end());
        return sol;
    }
};