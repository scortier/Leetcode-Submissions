class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        queue<string> q;
        q.push(beginWord);
        int ans=1;
        while(!q.empty()){
            int n = q.size();
            for(int i=0;i<n;i++){
                string temp = q.front();
                q.pop();
                if(temp==endWord){
                    return ans;
                }
                int k=0;
                while(k<wordList.size()){
                    int step=0;
                    for(int j=0;j<temp.size();j++){
                        if(temp[j]!=wordList[k][j]){
                            step++;
                        }
                        if(step>1){
                            break;
                        }
                    }
                    if(step==1){
                        if(endWord==wordList[k]){
                            return ans+1;
                        }
                        q.push(wordList[k]);
                        wordList.erase(wordList.begin()+k);
                    }
                    else{
                        k++;
                    }
                }
            }
            ans++;
        }
        return 0;
    }
};