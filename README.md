# DijkstraGraphSolver

# Graph Shortest Path Finder

This project implements Dijkstra’s algorithm to find the shortest paths in an undirected graph. It reads input from standard input, constructs the graph, identifies all vertices with odd degrees, and runs Dijkstra’s algorithm from each of them.

##  Project Structure

template_code/
├── report.pdf # Project report
├── template_code/
│ ├── Edge.h / Edge.cpp # Edge class implementation
│ ├── Vertex.h / Vertex.cpp # Vertex class implementation
│ ├── Graph.h / Graph.cpp # Graph class (adjacency matrix, Dijkstra)
│ ├── Main.cpp # Main function: reads input and runs logic
│ ├── Makefile # Build file for compiling all components
│ └── .vscode/ # Optional VS Code settings

Use the provided `Makefile`:

```bash
make

./main < input.txt

Input Format
The input should describe an undirected graph. Example format:

Copy
Edit
5 6
0 1 10
1 2 5
2 3 3
3 4 1
4 0 7
1 3 8

 Features
Adjacency matrix representation

Dijkstra’s shortest path from all odd-degree vertices

Modular C++ classes: Graph, Vertex, Edge

Requirements
GCC or any modern C++ compiler

(Optional) VS Code with C++ extensions

