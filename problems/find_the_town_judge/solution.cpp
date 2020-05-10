class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        // defining variables
        
        int sz = trust.size(),i;
        
        //defining end of array
        
        int trustees[1001]={0};
        int trusts[1001]={0};
        
        // for loop logical execution
        
        for(i=0;i<sz;i++){
            
            trusts[trust[i][0]]++;
            trustees[trust[i][1]]++;
        }
        
        // for loop for for number of loops
        
        for(i=1;i<=N;i++){
            if(trustees[i] == N-1 && trusts[i]==0) return i;
        }
        
        // returning values & printing answer
        
        return -1;
    }
};