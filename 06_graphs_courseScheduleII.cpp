#include <iostream>
#include <queue>
#include <vector>

void helper(int num, std::vector<int>& result, std::vector<int>& indegree, std::queue<int>& q,std::vector<std::vector<int>>& grid){
        std::vector<std::vector<int>> adj(num);

    for(auto p : grid){
        int course = p[0];
        int prereq = p[1];

        adj[prereq].push_back(course);
    }

    for(auto p: grid){
        indegree[p[0]]++;
    }

    for(int i=0; i<num; i++){
        if(indegree[i] == 0){
            q.push(i);
        }
    }

    while(!q.empty()){
        int node = q.front();
        q.pop();

        result.push_back(node);

        for(int neighbor : adj[node]){
            indegree[neighbor]--;

            if(indegree[neighbor] == 0){
                q.push(neighbor);
            }
        }
    }
}


std::vector<int> canFinish(int num, std::vector<std::vector<int>>& grid){
    std::vector<int> indegree(num, 0);
    std::queue<int> q;
    std::vector<int> result;

    helper(num, result, indegree, q, grid);

    if(result.size() != num){
        return {};
    }
    return result;
}

int main(){
    int numCourses = 4;
    std::vector<std::vector<int>> prerequisites = {
        {1, 0},
        {2, 0},
        {3, 1},
        {3, 2}
    };

    std::vector<int> result = canFinish(numCourses, prerequisites);

    for(auto i : result){
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}