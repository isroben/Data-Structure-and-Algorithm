#include <iostream>
#include <vector>
#include <list>
#include <queue>

class Graph{
    int V;
    std::list<int>* l;

public:
    Graph(int V){
        this->V = V;
        l = new std::list<int> [V];
    }
    void addEdge(int u, int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void bfs(int src){
        std::queue<int> Q;
        std::vector<bool> vis(V, false);

        Q.push(src);
        vis[src] = true;

        while(Q.size() > 0){
            int u = Q.front();
            Q.pop();
            std::cout << u << " ";

            for(int v : l[u]){
                if(!vis[v]){
                    Q.push(v);
                    vis[v] = true;
                }
            }
        }

    }

    void helperdfs(int src, std::vector<bool>& vis){
        vis[src] = true;
        std::cout << src << " ";

        for(int v : l[src]){
            if(!vis[v]){
                helperdfs(v, vis);
            }
        }
    }
    void dfs(int src){
        std::vector<bool> vis(V, false);

        helperdfs(src, vis);
    }
};


int main(){

    Graph g(8);

    g.addEdge(6, 1);
    g.addEdge(1, 2);
    g.addEdge(1, 4);
    g.addEdge(1, 7);
    g.addEdge(2, 3);
    g.addEdge(2, 4);
    g.addEdge(2, 5);
    g.addEdge(3, 4);

    g.bfs(6);

    std::cout << std::endl;

    g.dfs(6);

    return 0;
}