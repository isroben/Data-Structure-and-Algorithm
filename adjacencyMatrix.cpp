#include<iostream>

int main(){
    int n, m;
    std::cin >> n >> m;

    // Graph
    int adj[n+1][n+1];

    for(int i=0; i<m; i++){
        int u, v;
        std::cin >> u >> v;

        adj[u][v] = 1;
        adj[v][u] = 1;

    }


    return 0;
}