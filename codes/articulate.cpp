#include <bits/stdc++.h>
using namespace std;

// Standard DFS to mark all reachable nodes
void dfs(int node, vector<vector<int>> &adj, vector<bool> &visited) {
    visited[node] = true;
    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, adj, visited);
        }
    }
}

// Builds adjacency list from edge list
vector<vector<int>> constructadj(int V, vector<vector<int>> &edges) {
   vector<vector<int>> adj(V);
    for (auto it : edges) {
        adj[it[0]].push_back(it[1]);
        adj[it[1]].push_back(it[0]);
    }
    return adj;
}

// Finds articulation points using naive DFS approach
vector<int> articulationPoints(int V, vector<vector<int>> &edges) {
    vector<vector<int>> adj = constructadj(V, edges);
    vector<int> res;
   // Try removing each node one by one
    for (int i = 0; i < V; ++i) {
        vector<bool> visited(V, false);
        visited[i] = true;
        // count DFS calls from i's neighbors
        int comp = 0; 
        for (auto it : adj[i]) {
            // early stop if already more than 1 component
            if (comp > 1) break; 
            if (!visited[it]) {
                // explore connected part
                dfs(it, adj, visited); 
                comp++;
            }
        }

        // if more than one component forms, it's an articulation point
        if (comp > 1)
            res.push_back(i);
    }

    if (res.empty())
        return {-1};
   return res;
}

int main() {
    int V = 5;
    vector<vector<int>> edges = {{0, 1}, {1, 4}, {2, 3}, {2, 4}, {3, 4}};

    vector<int> ans = articulationPoints(V, edges);
    for (auto it : ans) {
        cout << it << " ";
    }
    return 0;
}
