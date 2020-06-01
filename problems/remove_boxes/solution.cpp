class Solution {
public:
    int removeBoxes(vector<int>& boxes) {
        int mem[100][100][100]={0};
        return dfs(boxes, mem, 0, boxes.size()-1, 0);
    }
private:
    int dfs(vector<int>& boxes, int mem[100][100][100], int l, int r, int k) {
        if(l>r) return 0;
        if(mem[l][r][k]) return mem[l][r][k];
        
        while(r>l && boxes[r]==boxes[r-1]) {
            r--;
            k++;
        }
        mem[l][r][k]=dfs(boxes, mem, l, r-1, 0)+(k+1)*(k+1);
        for(int i=l; i<r; ++i) {
            if(boxes[i]==boxes[r]) {
                mem[l][r][k]=max(mem[l][r][k], dfs(boxes, mem, l, i, k+1)+dfs(boxes, mem, i+1, r-1, 0));
            }
        }
        
        
        return mem[l][r][k];
    }
    
    
};