class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        int n = arr.size();
        int m = pieces.size();
        int i = 0;
        
        while(i < n){
            int prev = i;
            int found = false;
            for(int j=0; j<m; j++){
                if(!found && pieces[j][0] == arr[i]){
                    i++;
                    found = true;
                    for(int k=1; k<pieces[j].size(); k++){
                        if(pieces[j][k] == arr[i]){
                            i++;
                        }
                        else
                            return false;
                    }
                }
            }
            if(i == prev)
                return false;
            
        }
        return true;
        
        
    }
};