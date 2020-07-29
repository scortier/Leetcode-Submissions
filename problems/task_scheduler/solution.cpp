class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        
        int len = tasks.size();
        vector<int>freq(26,0);
        int max_occur = INT_MIN;
        int pos = -1;
        for(int i=0;i<len;i++)
        {
            freq[tasks[i] - 'A']++;
        }
        
        for(int i=0;i<26;i++)
        {
            if(max_occur < freq[i])
            {
                max_occur = freq[i];
                pos = i;
            }
        }
        int idle = (max_occur - 1)*n;
        
        for(int i=0;i<26;i++)
        {
            if(i == pos)    continue;
            idle -= min(freq[i], max_occur-1);
        }
        
        return len + max(0, idle);
    }
};