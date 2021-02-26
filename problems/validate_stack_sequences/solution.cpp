class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) 
    {
        int j = 0;
        stack<int> pp;

        for(int i=0;i<pushed.size();i++)
        {
            pp.push(pushed[i]);
            if(pp.top() == popped[j])
            {
                    while(pp.top() == popped[j])
                    {
                        pp.pop();
                        j++;
                        if(pp.empty())
                        {
                            break;
                        }
                    }

            }
        }

        return pp.empty();
    }
};