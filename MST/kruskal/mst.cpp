#include <bits/stdc++.h>
using namespace std;
struct node
{
    int u;
    int v;
    int wt;
    node(int first, int second, int weight)
    {
        u = first;
        v = second;
        wt = weight;
    }
};
bool comp(node A, node B)
{
    return A.wt < B.wt;
}
int findParent(int n, vector<int> &parent)
{
    if (n == parent[n])
        return n;
    return parent[n] = findParent(parent[n], parent);
}
void Union(int u, int v, vector<int> &parent, vector<int> &rank)
{
    u = findParent(u, parent);
    v = findParent(v, parent);
    if (rank[u] > rank[v])
        parent[v] = u;
    else if (rank[v] > rank[u])
        parent[u] = v;
    else
    {
        parent[u] = v;
        rank[v]++;
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<node> edges;
    while (m--)
    {
        int u, v, wt;
        cin >> u >> v >> wt;
        edges.push_back({u, v, wt});
    }
    sort(edges.begin(), edges.end(), comp);
    vector<int> parent(n);
    vector<int> rank(n, 0);
    for (int i = 0; i < n; i++)
        parent[i] = i;
    vector<pair<int, int>> mst;
    int cost = 0;
    for (auto it : edges)
    {
        int u = it.u;
        int v = it.v;
        int weight = it.wt;
        if (parent[u] != parent[v])
        {
            cost += weight;
            mst.push_back({u, v});
            Union(u, v, parent, rank);
        }
    }
    cout << cost;
}