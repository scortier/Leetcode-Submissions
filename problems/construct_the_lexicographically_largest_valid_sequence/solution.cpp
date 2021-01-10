class Solution {

    
    int n;
    
    int a[50];
    
    bool used[21]={0};
    bool dfs(int idx){
        if(idx==n*2-1){
            
            return true;
        }
        else{
            
            if(a[idx]>=0){
                return dfs(idx+1);
            }
            else{
               
                for(int j=n;j>1;j--){
                    if(!used[j]&&a[idx+j]<0){
                        used[j]=1;
                        a[idx]=a[idx+j]=j;
                        
                        if(dfs(idx+1))return true;
                        used[j]=0;
                        a[idx]=a[idx+j]=-1;
                    }
                }
               
                if(!used[1]){
                    used[1]=1;
                    a[idx]=1;
                   
                    if(dfs(idx+1))return true;
                    used[1]=0;
                    a[idx]=-1;
                }
                return false;
            }
        }
    }
    public:
    vector<int> constructDistancedSequence(int _n) {
        n=_n;
        
        memset(a,0xff,sizeof(a));
        dfs(0);
        return vector<int>(a,a+n*2-1);
    }
};