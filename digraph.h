/*
Author: Raphael Senn

Simple Implementation of a directed Graph.

*/


#pragma once

#include <map>
#include <tuple>
#include <vector>
#include <string>

class DiGraph {

public:
    DiGraph();
    void addNode(std::string node);
    void addEdge(std::string node_1, std::string node_2, double cost);
    bool hasNode(std::string node);
    bool hasEdge(std::string node1, std::string node2);

private:
    std::map<std::string, std::vector<std::tuple<std::string, double>>> adjacencyList_;

};

