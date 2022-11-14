class Solution {
public:
    void dfs(int curr, vector<int> adjList[], vector<bool> &visited, int &len) {
		if(visited[curr]) return;
		visited[curr] = true;
		len++;
		for(int next: adjList[curr]) {
			dfs(next, adjList, visited, len);
		}
	}

	int removeStones(vector<vector<int>>& stones) {
		int n = stones.size();
		int ans = 0;
		vector<int> adjList[n];
		vector<bool> visited(n);
		for(int i = 0; i < n; i++) {
			for(int j = i + 1; j < n; j++) {
				if(stones[i][0] - stones[j][0] == 0 || stones[i][1] - stones[j][1] == 0) {
					adjList[i].push_back(j);
					adjList[j].push_back(i);
				}
			}
		}
		for(int i = 0; i < n; i++) {
			if(!visited[i]) {
				int len = 0;
				dfs(i, adjList, visited, len);
				ans += len - 1;
			}
		}
		return ans;
        
    }
};