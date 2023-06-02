#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;
class Graph
{
public:
    int v;
    list<int> *adj;
    Graph(int n)
    {
        this->v = n;
        this->adj = new list<int>[this->v];
    }
    void addEdge(int u, int v, bool bidir = true)
    {
        adj[u].push_back(v);
        if (bidir)
        {
            adj[v].push_back(u);
        }
    }
    void dfsHelper(int src, unordered_map<int, bool> &visited)
    {
        visited[src] = true;
        cout << src << "\n";
        for (auto neighbour : this->adj[src])
        {
            if (not visited[neighbour])
            {
                dfsHelper(neighbour, visited);
            }
        }
    }
    /* void dfs(int src)
     {
         unordered_map<int, bool> visited;
         dfsHelper(src, visited);
     }*/
    int connectedComp()
    {
        unordered_map<int, bool> visited;
        int result = 0;
        for (int i = 0; i < v - 1; i++)
        {
            if (not visited[i])
            {
                dfsHelper(i, visited);
                result++;
            }
        }
        return result;
    }
};
int main()
{
    Graph g(6);
    g.addEdge(0, 1);
    g.addEdge(2, 1);
    g.addEdge(3, 2);
    g.addEdge(4, 5);
    cout << g.connectedComp() << endl;
    // g.addEdge(0, 1);

    return 0;
}
