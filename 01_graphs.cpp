#include <iostream>
#include <vector>
#include <list>
#include <queue>

class Graph {
    int V;
    std::list<int> *l; // int *arr
public:
    Graph(int V){
        this->V = V;
        l = new std::list<int> [V];
    }

    void addEdge(int u, int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void printAdjList() {
        for(int i=0; i<V; i++) {
            std::cout << i << " : ";
            for(int v : l[i]){
                std::cout << v << " ";
            }
            std::cout << std::endl;
        }
    }

    // BFS Traversal
    void bfs(int src){ //O(V+E)
        std::queue<int> Q;
        std::vector<bool> vis(V, false);

        Q.push(src);
        vis[src] = true;

        while(Q.size() > 0) {
            int u = Q.front();
            Q.pop();

            std::cout << u << " ";

            for(int v : l[u]){
                if(!vis[v]){
                    vis[v] = true;
                    Q.push(v);
                }
            }

        }
    }

    void helperDfs(int src, std::vector<bool>& vis){
        vis[src] = true;
        std::cout << src << " ";
        
        for(int v : l[src]){
            if(!vis[v]){
                helperDfs(v, vis);
            }
        }
    }
    // DFS

    void dfs(int src){
	   std::vector<bool> vis(V, false);
       helperDfs(src, vis);
    }
};

int main() {
    Graph g(5);

    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);

    // g.printAdjList();

    // g.bfs(0);

    g.dfs(0);

    return 0;
}
