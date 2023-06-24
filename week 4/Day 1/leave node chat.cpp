#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> adj;  // Adjacency list representation of the graph
vector<bool> visited;     // Visited array to keep track of visited nodes

// DFS function to check if a node is a leaf node
bool isLeafNode(int node) {
    visited[node] = true;
    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            return false;  // Node has outgoing edge(s), so it is not a leaf node
        }
    }
    return true;  // Node does not have any outgoing edges, so it is a leaf node
}

int main() {
    int n;  // Number of nodes in the graph
    cin >> n;

    // Initialize the adjacency list and visited array
    adj.resize(n);
    visited.resize(n, false);

    // Read the edges of the graph
    int m;  // Number of edges
    cin >> m;
    for (int i = 0; i < m; i++) {
        int u, v;  // Edge from u to v
        cin >> u >> v;
        adj[u].push_back(v);
        // If the graph is undirected, add the reverse edge as well
        // adj[v].push_back(u);
    }

    // Choose a starting node
    int startNode;
    cin >> startNode;

    // Check if the chosen node is a leaf node
    bool isLeaf = isLeafNode(startNode);
    cout << (isLeaf ? "Leaf Node" : "Not a Leaf Node") << endl;

    return 0;
}
