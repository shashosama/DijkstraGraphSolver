all: dijkstra

dijkstra: Main.o Graph.o Edge.o
	g++ -std=c++11 -o dijkstra Main.o Graph.o Edge.o

Main.o: Main.cpp Graph.h
	g++ -std=c++11 -c Main.cpp

Graph.o: Graph.cpp Graph.h
	g++ -std=c++11 -c Graph.cpp

Edge.o: Edge.cpp Edge.h
	g++ -std=c++11 -c Edge.cpp

clean:
	rm -f *.o dijkstra
