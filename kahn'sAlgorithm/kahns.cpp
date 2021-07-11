
#include <bits/stdc++.h>
using namespace std;
void topoSort(vector<int> adj[], vector<int> &topo, int n)
{
    vector<int> indegree(n, 0);
    for (int i = 0; i < n; i++)
    {
        for (auto it : adj[i])
            indegree[it]++;
    }
    queue<int> que;
    for (int i = 0; i < n; i++)
    {
        if (indegree[i] == 0)
            que.push(i);
    }
    while (!que.empty())
    {
        int node = que.front();
        que.pop();
        topo.push_back(node);
        for (auto it : adj[node])
        {
            indegree[it]--;
            if (indegree[it] == 0)
                que.push(it);
        }
    }
    return;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> adj[n];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    vector<int> topo;
    topoSort(adj, topo, n);
    for (auto val : topo)
    {
        cout << val << " ";
    }
}