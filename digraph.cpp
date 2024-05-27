
#include "./digraph.h"

// ____________________________________________________________________________
DiGraph::DiGraph() {}

// ____________________________________________________________________________
void DiGraph::addNode(std::string node) {
    adjacencyList_[node] = {};
}

// ____________________________________________________________________________
void DiGraph::addEdge(std::string node_1, std::string node_2, double cost) {

}

// ____________________________________________________________________________
bool DiGraph::hasNode(std::string node) {
    return !(adjacencyList_.find(node) == adjacencyList_.end());
}

// ____________________________________________________________________________
bool DiGraph::hasEdge(std::string node_1, std::string node_2) {

}

std::string DiGraph::getDiGraphAsString() {
    std::string diGraphString;
}

