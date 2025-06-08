# DijkstraGraphSolver
## General Problem

In many real-world applications—like navigation systems, network routing, and logistics—finding the shortest path between points in a graph is a core requirement. However, many implementations:
- Focus only on fixed source nodes
- Do not emphasize **odd-degree vertex analysis**, which has relevance in graph theory problems like the **Chinese Postman Problem**

This project addresses the need for a **flexible shortest-path solver** that:
- Supports undirected graphs
- Identifies and computes shortest paths from **all vertices with odd degree**

## Solution

**DijkstraGraphSolver** is a modular C++ application that:

- Reads a graph from standard input in edge list format
- Constructs the graph using an adjacency matrix representation
- Identifies all vertices with **odd degrees**
- Runs **Dijkstra’s algorithm** from each of them
# Graph Shortest Path Finder

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

## What I Learned

This project helped reinforce foundational and practical C++ skills:

-  **Modular Design**: Broke down complex logic into separate reusable classes (`Vertex`, `Edge`, `Graph`)
-  **Graph Theory**: Explored applications of odd-degree nodes in shortest path problems
-  **Algorithm Mastery**: Implemented and debugged Dijkstra’s algorithm manually without relying on external libraries
-  **Makefile & CLI Workflow**: Learned to automate compilation and streamline testing using Makefiles and standard input/output

