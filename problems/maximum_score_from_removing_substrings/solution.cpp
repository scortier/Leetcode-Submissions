class Solution {
public:
    int maximumGain(string s, int x, int y) {
       char a=x>y?'a':'b';
        char b=x>y?'b':'a';
        if(x<=y)swap(x,y);
        bool visited[s.size()];
        memset(visited,0,sizeof(visited));
        int ans=0;
        {   
            stack<int>S;
            for(int i=0;i<s.size();i++){
               
                if(s[i]!=a&&s[i]!=b){
                    while(S.size())S.pop();
                }
                else if(s[i]==a)S.push(i);
                else if(s[i]==b){
                    if(S.size()){
                        visited[S.top()]=true;
                        visited[i]=true;
                        S.pop();
                        ans+=x;
                    }
                }
            }
        }
        {   
            int stacklen=0;
            for(int i=0;i<s.size();i++){
               
                if(s[i]!=a&&s[i]!=b)stacklen=0;
                
                if(visited[i])continue;
                if(s[i]==b)stacklen++;
                else if(s[i]==a){
                    if(stacklen){
                        stacklen--;
                        ans+=y;
                    }
                }
            }
        }
        return ans;
    }
};