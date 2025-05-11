#include "Edge.h"
#include <iostream>


#include "Graph.h" 
Graph* graph = nullptr;

int main(){

    // start of the initial pipeline that loads the test case file stream from std::cin

    int numOfVertices;
    int numOfEdges;

    if(!std::cin.eof()){
        std::cin >> numOfVertices;
        std::cin >> numOfEdges;

        // Initialize the Graph after reading n
        graph = new Graph(numOfVertices);
    }
    else{
        std::cout<<"Input not found!"<<std::endl;
        return NULL;
    }

    while(!std::cin.eof()){
        int startVertice;
        int endVertice;
        std::cin >> startVertice;
        std::cin >> endVertice;
        Edge* newEdge = new Edge(startVertice, endVertice);

        //  Load edge into graph 
        if (std::cin) {
            graph->Edge(startVertice, endVertice);
        }

        // Here is where you load up the Graph object
    }

    // Perform the three required outputs
    if (graph != nullptr) {
        graph->AdjMatrix();
        graph->OddDegreeVertices();
        graph->runDijkstra();
    }

    return 0;
}
