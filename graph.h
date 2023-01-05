#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED

#include <iostream>
using namespace std;
#define info(P) (P)->info
#define next(P) (P)->next
//#define first(L) ((L).first)
#define child(P) (P)->child

typedef char infotype;
typedef struct node *adrNode;
typedef struct edge *adrEdge;
struct node {
    infotype info;
    adrEdge child;
    adrNode next;

};
struct edge {
    infotype info;
    adrEdge next;

};

adrNode newNode_1301213118(char x); //(1 Poin)
/* mengembalikan alamat sebuah node baru dengan info berupa x */
void addNode_1301213118(adrNode &G, adrNode p); //(1 Poin)
/* I.S. terdefinisi alamat elemen pertama dari graph G (mungkin kosong), dan
sebuah alamat dari node baru yang disimpan pada p.
 F.S. node baru ditambahkan ke dalam list parent sebagai elemen terakhir*/
adrNode findNode_1301213118(adrNode G, char x); //(1 Poin)
/* mengembalikan alamat node dengan info x pada graph G, atau NULL apabila
tidak ditemukan */
void addEdge_1301213118(adrNode &G, char x, char y); //(2 Poin)
/* I.S. terdefinisi alamat elemen pertama dari graph G (mungkin kosong), dan
character x dan y.
 F.S. node dengan info x dan y terhubung oleh sebuah edge, edge ditambahkan
di awal pada list */
bool isConnected_1301213118(adrNode G, char x, char y); //(2 Poin)
/* mengembalikan true apabila x dan y terhubung oleh sebuah edge, atau false
apabila tidak terhubung */
void printGraph_1301213118(adrNode G); //(1 Poin)
/* I.S. terdefinisi alamat elemen pertama dari graph G (mungkin kosong).
 F.S. menampilkan adjacency graph, perhatikan contoh yang diberikan */
#endif // GRAPH_H_INCLUDED
