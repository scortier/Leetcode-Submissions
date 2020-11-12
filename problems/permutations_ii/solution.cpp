class Solution
{
public:
    vector<vector<int>> permuteUnique(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;
        vector<int> temp;
        vector<int> visited;
        visited.resize(nums.size());

        helper(nums, ans, temp, visited);

        return ans;
    }

    void helper(vector<int> &nums, vector<vector<int>> &ans, vector<int> &temp, vector<int> &visited)
    {
        if (temp.size() == nums.size())
        {
            ans.emplace_back(temp);
            return;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            
            if (visited[i] == true)
            {
                continue;
            }

            
            if (i > 0 && nums[i] == nums[i - 1] && visited[i - 1] == false)
            {
                continue;
            }

            visited[i] = 1;
            temp.emplace_back(nums[i]);

            helper(nums, ans, temp, visited);

            
            temp.pop_back();
            visited[i] = 0;
        }
    }
};