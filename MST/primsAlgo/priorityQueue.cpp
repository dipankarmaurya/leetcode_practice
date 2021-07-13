#include <bits/stdc++.h>

using namespace std;

int prims(vector<pair<int, int>> adj[], int n)
{
    int key[n];
    bool mst[n];
    int parent[n];
    for (int i = 0; i < n; i++)
        key[i] = INT_MAX, mst[i] = false, parent[i] = -1;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, 0});
    key[0] = 0;
    parent[0] = -1;
    for (int count = 0; count < n - 1; count++)
    {
        int u = pq.top().second;
        pq.pop();
        mst[u] = true;

        for (auto pair : adj[u])
        {
            int v = pair.first;
            int weight = pair.second;
            if (!mst[v] && weight < key[v])
            {
                key[v] = weight;
                pq.push({key[v], v});
                parent[v] = u;
            }
        }
    }

    int sum = 0;
    for (int x : key)
        sum += x;
    return sum;
}
int main()
{
    int vertex, edge;
    cin >> vertex >> edge;
    vector<pair<int, int>> adj[vertex];

    for (int i = 0; i < edge; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    int cost = prims(adj, vertex);
    cout << cost;
}