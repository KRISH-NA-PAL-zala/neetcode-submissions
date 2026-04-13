class Solution {
    int find(vector<int>& parent, int x){
        int p = parent[x];
        while(p != parent[p]){
            parent[p] = parent[parent[p]];
            p = parent[p];
        }

        return p;
    }
    int do_union(vector<int>& parent, vector<int>& rank, int x, int y){
        int px = find(parent, x);
        int py = find(parent, y);

        if(px == py) return 0;

        if(rank[px] > rank[py]){
            parent[py] = px;
            rank[px]++;
        }else{
            parent[px] = py;
            rank[py]++;
        }

        return 1;
    }
public:
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<int> parent(n);
        vector<int> rank(n, 1);

        for(int i = 0;i < n;i++){
            parent[i] = i;
        }

        int result = n;
        for(auto i: edges){
            result -= do_union(parent, rank, i[0], i[1]);
        }

        return result;
    }
};
