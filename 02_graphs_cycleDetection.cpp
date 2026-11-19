#include <iostream>
#include <list>
#include <vector>
#include <queue>
#include <utility>


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

    // Using DFS
    bool helperCycleDfs(int src, std::vector<bool>& vis, int par){
        vis[src] = true;
        // std::cout << src << " ";

        for(int v : l[src]){
            if(!vis[v]){
                if(helperCycleDfs(v, vis, src)) return true;
            }
            else{
                if(v != par) return true;
            }
        }
        return false;
    }

    void cycleInGraph(int src){
        std::vector<bool> vis(V, false);

        if(helperCycleDfs(src, vis, -1)){
            std::cout << "Cycle Exist in Graph.\n";
        }
        else{
            std::cout << "Cycle doesn't exist in Graph.\n";
        }
    }

    // Using BFS
    bool helperCycleBfs(int src, std::vector<bool>& vis, int par){
        std::queue<std::pair<int, int>> Q;
        Q.push({src, -1});
        vis[src] = true;

        while(Q.size() > 0){
            int u = Q.front().first;
            par = Q.front().second;
            std::cout << u << " ";
            Q.pop();

            for(int v : l[u]){
                if(!vis[v]){
                    Q.push({v, u});
                    vis[v] = true;
                }
                else if(v != par){
                    return true;
                }
            }
            
        }
        return false;
    }
    void CycleInGraphBfs(int src){
        std::vector<bool> vis(V, false);

        if(helperCycleBfs(src, vis, -1)){
            std::cout << "Cycle exist in Graph." << std::endl;
        }
        else{
            std::cout << "Cycle doesn't exist in Graph." << std::endl;
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

    // g.cycleInGraph(6);
    g.CycleInGraphBfs(6);

    return 0;
}