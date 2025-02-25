#include <ogdf/basic/Graph.h>       // For graph data structure
#include <ogdf/fileformats/GraphIO.h>  // For reading/writing graphs
#include <iostream>
#include <fstream>

int main() {
    ogdf::Graph G;  // Create an empty graph

    std::string filename = "z2.gml"; // Graph file name

    // Check if the file exists
    if (!std::ifstream(filename).good()) {
        std::cerr << "Error: File " << filename << " does not exist!" << std::endl;
        return 1;
    }

    // Read the graph
    if (ogdf::GraphIO::read(G, filename)) {
        std::cout << "Successfully loaded graph from: " << filename << std::endl;
        std::cout << "Number of nodes: " << G.numberOfNodes() << std::endl;
        std::cout << "Number of edges: " << G.numberOfEdges() << std::endl;
    } else {
        std::cerr << "Error: Could not load graph from " << filename << std::endl;
        return 1;
    }

    return 0;
}
