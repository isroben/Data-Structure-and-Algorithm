#include <iostream>
#include <vector>


void dfs(int i, int j, std::vector<std::vector<char>>& grid, std::vector<std::vector<bool>>& vis, int n, int m){
    if(i<0 || j<0 || i>=n || j>=m || vis[i][j] || grid[i][j]!='1'){
        return;
    }

    vis[i][j] = true;

    dfs(i-1, j, grid, vis, n, m); // top
    dfs(i, j-1, grid, vis, n, m); // left
    dfs(i+1, j, grid, vis, n, m); // bottom
    dfs(i, j+1, grid, vis, n, m); // right

}

int numOfIsland(std::vector<std::vector<char>>& grid){
    int isIsland = 0;
    int n = grid.size();
    int m = grid[0].size();

    std::vector<std::vector<bool>> vis(n, std::vector<bool>(m, false));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(grid[i][j] == '1' && !vis[i][j]){
                dfs(i, j, grid, vis, n, m);
                isIsland++;
            }
        }
    }
    return isIsland;
}


int main() {
    std::vector<std::vector<char>> grid = {{'1', '1', '0', '0', '0'},
                                            {'1', '1', '0', '0', '0'},
                                            {'0', '0', '1', '0', '0'},
                                            {'0', '0', '0', '1', '1'}};

    int numOfIslands = numOfIsland(grid);

    std::cout << "Number of Island presented in grid: " << numOfIslands << std::endl;


    return 0;
}