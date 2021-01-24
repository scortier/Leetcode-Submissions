class Solution {
public:
    // bottom up helper function
    // trace back the path for a node that has not been visited
    // and update the times array for this node
    void helper(vector<int>& manager, vector<int>& informtime, vector<int>& times, int id)
    {
        if (times[id] != -1)
          return;
        if (manager[id] == -1)
        {            
            times[id] = informtime[id];
            return;
        } 
        // first visit the manager of this node
        helper(manager, informtime, times, manager[id]);
        // once done with the upper levels, update times
        // value for this node based on its manager's time
        times[id] = informtime[id]+times[manager[id]];
        
    }
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        int num = manager.size();
        // allocate a times array which will indicate
        // the total time taken to arrive at this node
        vector<int> times(num, -1);
        int maxm = -1;
        for (int i = 0; i < num;++i)
        {
            if (times[i] == -1)
            {
              helper(manager, informTime, times, i);
            }
            // if the current time is larger than maxm
            // then update maxm
            maxm = max(times[i], maxm);
        }
        return maxm;
    }
};