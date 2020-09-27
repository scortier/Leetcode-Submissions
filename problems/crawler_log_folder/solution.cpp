class Solution {
public:
    int minOperations(vector<string>& logs) {
        
        // size of it 
        
        int n = logs.size();
        //counter 
        
        int count = 0;
        // for looping 
        
        for(int i=0;i<n;i++){
            // conditions 1 
            if(logs[i]!= "../" && logs[i]!= "./"){ count++; }
            
            // condition 2
            
            if(logs[i]== "../"){ count = count==0?0:count-1; }
            
            // condition 3 
            
            if(logs[i]== "./"){ continue; }
        }
        // exit counter 
        
        return count;
    }
    // end 
    
};