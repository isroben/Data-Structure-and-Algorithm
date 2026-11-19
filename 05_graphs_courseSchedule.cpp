#include <vector>
    
bool isCycle(int src, std::vector<bool>& vis, std::vector<bool>&recPath, std::vector<std::vector<int>>& edges){
    vis[src] = true;
    recPath[src] = true;

    for(int i=0; i<edges.size(); i++){
        int v = edges[i][0];
        int u = edges[i][1];

        if(u == src){
            if(!vis[v]){
                if(isCycle(v, vis, recPath, edges)){
                    return true;
                }
            }
            else if(recPath[v]){
                return true;
            }
        }
    }
    recPath[src] = false;
    return false;
}
    
bool canFinish(int n, std::vector<std::vector<int>>& edges) {
    std::vector<bool> vis(n, false);
    std::vector<bool> recPath(n, false);

    for(int i=0; i<n; i++){
        if(!vis[i]){
            if(isCycle(i, vis, recPath, edges)){
                return false;
            }
        }
    }
    return true;
}