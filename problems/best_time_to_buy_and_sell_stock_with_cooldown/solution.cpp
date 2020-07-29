class Solution {
public:
    int maxProfit(vector<int>& prices) {
       if(prices.size()<=1)
           return 0;
        int n=prices.size();
       vector<long> buy(n,0),sell(n,0),rest(n,0);
        buy[0]=-prices[0];
        sell[0]=INT_MIN;
        rest[0]=0;
        for(int i=1;i<n;i++)
        {
            rest[i]=max({rest[i-1],sell[i-1]});
            sell[i]=buy[i-1]+prices[i];
            buy[i]=max(buy[i-1],rest[i-1]-prices[i]);

            ///cout<<buy[i]<<"    "<<sell[i]<<"    "<<rest[i]<<"\n";
        }
        return max(sell[n-1],rest[n-1]);
    }
}; 