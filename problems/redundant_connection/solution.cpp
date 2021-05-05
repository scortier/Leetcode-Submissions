class Solution {
 	vector<int>parent;
 	int find(int x) {
 		return parent[x] == x ? x : find(parent[x]);
 	}
 public:
 	vector<int> findRedundantConnection(vector<vector<int>>& edges) {

 		parent.resize(edges.size()+1, 0);
 		for (int i = 0; i < edges.size(); i++)
 			parent[i] = i;

 		vector<int>res(2, 0);
 		for (int i = 0; i < edges.size(); i++) {
 			int x = find(edges[i][0]);
 			int y = find(edges[i][1]);
 			if (x != y)
 				parent[y] = x;
 			else {
 				res[0] = edges[i][0];
 				res[1] = edges[i][1];
 			}
 		}

 		return res;
 	}
 };