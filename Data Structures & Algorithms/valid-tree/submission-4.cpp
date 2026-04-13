class Solution {
    bool hasCycle(vector<vector<int>>& adj, vector<int>& visited, int parent, int child){
        if(visited[child]) return true;

        visited[child]++;

        for(auto i: adj[child]){
            if(i != parent && hasCycle(adj, visited, child, i)) return true;
        }
    }
public:
    bool validTree(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        for(auto i: edges){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }

        vector<int> visited(n);
        if(hasCycle(adj, visited, -1, 0)){
            return false;
        }

        for(int i = 0;i < n;i++){
            if(!visited[i]) return false;
        }

        return true;
    }
};
