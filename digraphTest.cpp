
#include <gtest/gtest.h>

#include "./digraph.h"


TEST(digraph, addNode) {
    DiGraph graph;
    graph.addNode("A");
    graph.addNode("B");
    graph.addNode("C");
    ASSERT_EQ(graph.hasNode("A"), true);
    ASSERT_EQ(graph.hasNode("B"), true);
    ASSERT_EQ(graph.hasNode("C"), true);
    ASSERT_EQ(graph.hasNode("D"), false);
    ASSERT_EQ(graph.hasNode("E"), false);
}

