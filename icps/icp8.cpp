
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
void bfs(const vector<vector<int>>& graph, int start) {
    vector<bool> visited(graph.size(), false);
    queue<int> q;

    visited[start] = true;
    q.push(start);

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << "visited node: " << node << endl;

        for (int neighbor : graph[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}


void dfs(const vector<vector<int>>& graph, int start) {
    int n = graph.size();
    vector<bool> visited(n, false);
    vector<int> parent(n, -1);


    for (int i = start; i < n + start; ++i) {
        int nodeIndex = i % n;  
        if (!visited[nodeIndex]) {
        
            stack<int> s;
            s.push(nodeIndex);
            parent[nodeIndex] = -1;
            cout << "root: " << nodeIndex << endl;

            while (!s.empty()) {
                int node = s.top();
                s.pop();

                if (!visited[node]) {
                    visited[node] = true;
                    for (int neighbor : graph[node]) {
                        if (!visited[neighbor]) {
                            parent[neighbor] = node;
                            cout << "parent: " << node << " -> child: " << neighbor << endl;
                            s.push(neighbor);
                        }
                    }
                }
            }
        }
    }

    cout << endl;
}





int main(){
    vector<vector<int>> graph = {
        {1, 2},   
        {2},      
        {0, 3},   
        {3}       
    };

    bfs(graph,2);
    dfs(graph,0);
    dfs(graph,3);

    return 0;
}