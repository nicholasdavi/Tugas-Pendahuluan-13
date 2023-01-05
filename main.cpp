#include "graph.h"
int main()
{
    adrNode G;
    G = NULL;

    adrNode P = newNode_1301213118('A');
    addNode_1301213118(G, P);
    P = newNode_1301213118('B');
    addNode_1301213118(G, P);
    P = newNode_1301213118('C');
    addNode_1301213118(G, P);
    P = newNode_1301213118('D');
    addNode_1301213118(G, P);

    addEdge_1301213118(G, 'A', 'B');
    addEdge_1301213118(G, 'D', 'A');
    addEdge_1301213118(G, 'B', 'D');
    addEdge_1301213118(G, 'A', 'C');

    printGraph_1301213118(G);
    return 0;
}
