#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int shortestPath(int V, vector<vector<int>>& edges, int start, int end) {
    vector<vector<int>> adj(V);
    for (auto &e : edges) {
        int u = e[0], v = e[1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> dist(V, -1);
    queue<int> q;
    dist[start] = 0;
    q.push(start);
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        if (node == end) return dist[node];
        for (int neigh : adj[node]) {
            if (dist[neigh] == -1) {
                dist[neigh] = dist[node] + 1;
                q.push(neigh);
            }
        }
    }
    return -1;
}

int main() {
    int V = 5;
    vector<vector<int>> edges = {{0,1},{0,2},{1,3},{2,3},{3,4}};
    int start = 0, end = 4;
    cout << shortestPath(V, edges, start, end) << endl;
    return 0;
}
