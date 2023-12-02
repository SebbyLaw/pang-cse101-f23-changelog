#ifndef DIJKSTRA_H
#define DIJKSTRA_H

#include <stddef.h>

/**
 * @brief Implements Dijkstra's algorithm on a graph to find shortest paths from a source node.
 * 
 * It calculates minimum distances from a source city to all other cities in a graph (up to 'K' cities). 
 * The graph is represented by an adjacency matrix. If the destination city is unreachable, the function 
 * outputs -1. Otherwise, it prints the shortest distance to the destination city.
 * 
 * @param graph The adjacency matrix of the graph.
 * @param num_cities The number of cities (nodes) in the graph.
 * @param src The index of the source city.
 */
void dijkstra(int **graph, int num_cities, int src);

#endif // DIJKSTRA_H
