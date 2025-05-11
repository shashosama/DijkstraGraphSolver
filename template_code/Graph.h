#ifndef GRAPH_H
#define GRAPH_H

class Graph {
private:
    int numVertices;
    int** adjMatrix;
    int* degrees;

    void dijkstra(int source);
    int getMinDistance(int* dist, bool* visited);

public:
    Graph(int n);
    ~Graph();
    void Edge(int u, int v);
    void AdjMatrix();
    void OddDegreeVertices();
    void runDijkstra();
};

#endif
