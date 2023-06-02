#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;
template <typename T>
class Graph
{
public:
    unordered_map<T, list<T>> adj;
    Graph()
    {
    }
    void add_edge(T n1, T n2, bool bidir = true)
    {
        adj[n1].push_back(n2);
        if (bidir)
        {
            adj[n2].push_back(n1);
        }
    }
    void print()
    {
        for (auto row : this->adj)
        {
            cout << row.first << "-->";
            for (T el : row.second)
            {
                cout << el << ", ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Graph<int> g1;
    Graph<string> g2;
    g1.add_edge(1, 2);
    g1.add_edge(1, 3);
    g1.add_edge(1, 4);
    g1.print();
    g2.add_edge("Bondhu", "Moyin", false);
    g2.add_edge("Bondhu", "Oisik", false);
    g2.add_edge("Bossom Bondhu", "Tokon", false);
    g2.add_edge("Bossom Bondhu", "Mendi", false);
    g2.print();
    // vector<in>
    //unordered_map<string, int> ngbrs;
    return 0;
}