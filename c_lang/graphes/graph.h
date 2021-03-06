#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED

#define MAX_MATRIX_INT_VALUE 2147483647

int loadAdjacencyMatrixData(FILE* inputFile, int** matrix);

void printAdjacencyMatrix(int* matrix, int size);

/**
 * DFS (Depth-first search) - обход графа в глубину
 */
void graphFullDFS(int firstVertex, int* matrix, int size);

/**
 * BFS (Breadth-first search) - обход графа в ширину
 */
void graphFullBFS(int firstVertex, int* matrix, int size);

#endif // GRAPH_H_INCLUDED
