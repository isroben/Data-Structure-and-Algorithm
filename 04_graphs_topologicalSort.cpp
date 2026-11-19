#include <iostream>
#include <stack>
#include <list>

class Graph{
    int V;
    std::list<int>* l;

public:
    Graph(int V){
        this->V = V;
        l = new std::list<int> [V];
    }

    void addEdge(int u, int v){
        l[u].push_back(v); // uni-directional
    }

    void helperSort(int curr, std::vector<bool>& vis, std::stack<int>& s){
        vis[curr] = true;

        for(int v : l[curr]){
            if(!vis[v]){
                helperSort(v, vis, s);
            }
        }
        s.push(curr);
    }

    void sort(){
        std::vector<bool> vis(V, false);
        std::stack<int> s;

        for(int i=0; i<V; i++){
            if(!vis[i]){
                helperSort(i, vis, s);
            }
        }

        while(s.size() > 0){
            std::cout << s.top() << " ";
            s.pop();
        }
        std::cout<<std::endl;
    }
};


int main(){
    Graph g(6);

    g.addEdge(2, 3);
    g.addEdge(3, 1);
    g.addEdge(4, 1);
    g.addEdge(5, 2);
    g.addEdge(4, 0);
    g.addEdge(5, 0);


    g.sort();

    return 0;
}