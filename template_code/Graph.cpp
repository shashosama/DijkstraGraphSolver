#include "Graph.h"
#include <iostream>
#include <climits>
using namespace std;

Graph::Graph(int n) {
    numVertices = n;
    adjMatrix = new int*[n];
    degrees = new int[n];
    for (int i = 0; i < n; i++) {
        adjMatrix[i] = new int[n];
        degrees[i] = 0;
        for (int j = 0; j < n; j++) {
            adjMatrix[i][j] = 0;
        }
    }
}

Graph::~Graph() {
    for (int i = 0; i < numVertices; i++) {
        delete[] adjMatrix[i];
    }
    delete[] adjMatrix;
    delete[] degrees;
}

void Graph::Edge(int u, int v) {
    u--; v--;
    adjMatrix[u][v] = 1;
    adjMatrix[v][u] = 1;
    degrees[u]++;
    degrees[v]++;
}

void Graph::AdjMatrix() {
    cout << " The adjacency matrix of G:\n";
    for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numVertices; j++) {
            cout << adjMatrix[i][j] << " ";
        }
        cout << "\n";
    }
}

void Graph::OddDegreeVertices() {
    cout << "\n  The odd degree vertices in G:\n\nO = { ";
    for (int i = 0; i < numVertices; i++) {
        if (degrees[i] % 2 != 0) {
            cout << (i + 1) << " ";
        }
    }
    cout << "}\n";
}

int Graph::getMinDistance(int* dist, bool* visited) {
    int min = INT_MAX, minIndex = -1;
    for (int v = 0; v < numVertices; v++) {
        if (!visited[v] && dist[v] <= min) {
            min = dist[v];
            minIndex = v;
        }
    }
    return minIndex;
}

void Graph::dijkstra(int src) {
    int* dist = new int[numVertices];
    bool* visited = new bool[numVertices];

    for (int i = 0; i < numVertices; i++) {
        dist[i] = INT_MAX;
        visited[i] = false;
    }

    dist[src] = 0;

    for (int count = 0; count < numVertices - 1; count++) {
        int u = getMinDistance(dist, visited);
        if (u == -1) break;
        visited[u] = true;

        for (int v = 0; v < numVertices; v++) {
            if (!visited[v] && adjMatrix[u][v] && dist[u] != INT_MAX && dist[u] + 1 < dist[v]) {
                dist[v] = dist[u] + 1;
            }
        }
    }

    cout << "\n  Single source shortest path lengths from node " << (src + 1) << "\n";
    for (int i = 0; i < numVertices; i++) {
        cout << "  " << (i + 1) << ": " << dist[i] << "\n";
    }

    delete[] dist;
    delete[] visited;
}

void Graph::runDijkstra() {
    for (int i = 0; i < numVertices; i++) {
        if (degrees[i] % 2 != 0) {
            dijkstra(i);
        }
    }
}
