#include "./Graph/Graph.hpp"

int main() {
    Graph graph;
    graph.readGraphFromFile("graph.txt");

    graph.setStrategy("dijkstra");
    NumArr pathDijkstra = graph.getShortestPath();
    graph.printPath(pathDijkstra);

    graph.setStrategy("astar");
    NumArr pathAStar = graph.getShortestPath();
    graph.printPath(pathAStar);

    return 0;
}