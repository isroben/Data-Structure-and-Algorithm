#include <iostream>
#include <list>
#include <vector>


class Graph{
    int V;
    std::list<int>* l;

public:
    Graph(int V){
        this->V = V;
        l = new std::list<int> [V];
    }

    void addEdge(int u, int v) {
        l[u].push_back(v);
        l[v].push_back(u);
    }

    bool helperCycle(int src, std::vector<bool>& vis, int par){
        vis[src] = true;
        // std::cout << src << " ";

        for(int v : l[src]){
            if(!vis[v]){
                if(helperCycle(v, vis, src)) return true;
            }
            else{
                if(v != par) return true;
            }
        }
        return false;
    }

    void cycleInGraph(int src){
        std::vector<bool> vis(V, false);

        if(helperCycle(src, vis, -1)){
            std::cout << "Cycle Exist in Graph.\n";
        }
        else{
            std::cout << "Cycle doesn't exist in Graph.\n";
        }
    }
};

int main() {
    Graph g(8);

    g.addEdge(6, 1);
    g.addEdge(1, 2);
    g.addEdge(1, 4);
    g.addEdge(1, 7);
    g.addEdge(2, 3);
    g.addEdge(2, 4);
    g.addEdge(2, 5);
    g.addEdge(3, 4);

    g.cycleInGraph(6);

    return 0;
}