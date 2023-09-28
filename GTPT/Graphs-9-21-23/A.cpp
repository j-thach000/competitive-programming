#include "bits/stdc++.h"

using namespace std;

void bfs(int x, vector<vector<int>>& adj, vector<int>& visited_BFS) {
    queue<int> q; 
    visited_BFS[x] = true;
    q.push(x);
    while (!q.empty()) {
        int s = q.front();
        q.pop();    
        cout << s+1 << " ";
        for (auto u : adj[s]) {
            if (!visited_BFS[u]) {
                visited_BFS[u] = true;
                q.push((u));
            }
        }
    }
}

void dfs(int s, vector<vector<int>>& adj, vector<int>& visited_DFS) {
    cout << s+1 << " ";
    visited_DFS[s] = true;
    for (auto u : adj[s]) {
        if (!visited_DFS[u]) {
            dfs(u, adj, visited_DFS);
        }
    }
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        u--; v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // BFS
    vector<int> visited_BFS(n, 0); 
    bfs(0, adj, visited_BFS);
    cout << "\n";

    // DFS
    vector<int> visited_DFS(n, 0); 
    dfs(0, adj, visited_DFS);
    cout << "\n";
}

int main() {
    // magic lines to make i/o faster, refer to https://stackoverflow.com/a/31165481 if you're curious why
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}