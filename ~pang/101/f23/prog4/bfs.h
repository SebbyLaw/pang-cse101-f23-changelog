#ifndef BFS_H
#define BFS_H

#include "queue.h"
#include <stddef.h>

/**
 * @brief Performs Breadth-First Search (BFS) on a graph to explore nodes level by level.
 * @param graph The adjacency matrix of the graph with cities as nodes.
 * @param num_cities The total number of cities in the graph.
 * @param start The starting city index for BFS.
 */
void bfs(int **graph, size_t num_cities, int start);

#endif // BFS_H