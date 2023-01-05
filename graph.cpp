#include "graph.h"

adrNode newNode_1301213118(char x)
/* mengembalikan alamat sebuah node baru dengan info berupa x */{
    adrNode P = new node;
    info(P) = x;
    next(P) = NULL;
    child(P) = NULL;
    return P;
}

void addNode_1301213118(adrNode &G, adrNode p) //(1 Poin)
/* I.S. terdefinisi alamat elemen pertama dari graph G (mungkin kosong), dan
sebuah alamat dari node baru yang disimpan pada p.
 F.S. node baru ditambahkan ke dalam list parent sebagai elemen terakhir*/{
    if(G == NULL){
        G = p;
    }else{
        adrNode Q;
        Q = G;
        while(next(Q) != NULL){
            Q = next(Q);
        }
        next(Q) = p;
    }
}

adrNode findNode_1301213118(adrNode G, char x)//(1 Poin)
/* mengembalikan alamat node dengan info x pada graph G, atau NULL apabila
tidak ditemukan */{
    adrNode P = G;
    while (info(P) != x && P != NULL){
        P = next(P);
    }
    return P;
}

void addEdge_1301213118(adrNode &G, char x, char y) //(2 Poin)
/* I.S. terdefinisi alamat elemen pertama dari graph G (mungkin kosong), dan
character x dan y.
 F.S. node dengan info x dan y terhubung oleh sebuah edge, edge ditambahkan
di awal pada list */{
    if(!isConnected_1301213118(G,x,y)){
        adrEdge A,B;
        adrNode P = findNode_1301213118(G,x);
        adrNode Q = findNode_1301213118(G,y);
        if (P != NULL && Q != NULL){
            adrEdge A = new edge;
            info(A) = y;
            next(A) = NULL;
            if (child(P) == NULL){
                child(P) = A;
            }else{
                next(A) = child(P);
                child(P) = A;
            }

            adrEdge B = new edge;
            info(B) = x;
            next(B) = NULL;
            if (child(Q) == NULL){
                child(Q) = B;
            }else{
                next(B) = child(Q);
                child(Q) = B;
            }
        }
    }
}
bool isConnected_1301213118(adrNode G, char x, char y) //(2 Poin)
/* mengembalikan true apabila x dan y terhubung oleh sebuah edge, atau false
apabila tidak terhubung */{
    adrNode P = findNode_1301213118(G,x);
    adrNode Q = findNode_1301213118(G,y);
    adrEdge A,B;
    if(P != NULL && Q != NULL){
        A = child(P);
        while (A != NULL && info(A)!= y){
            A = next(A);
        }

        B = child(Q);
        while (B != NULL && info(B) != x){
            B = next(B);
        }
    }
    return A != NULL && A != NULL;
}
void printGraph_1301213118(adrNode G) //(1 Poin)
/* I.S. terdefinisi alamat elemen pertama dari graph G (mungkin kosong).
 F.S. menampilkan adjacency graph, perhatikan contoh yang diberikan */{
    adrNode P = G;
    while (P != NULL){
        cout << "NODE " << info(P) << ":" ;
        adrEdge Q = child(P);
        while (Q != NULL){
            cout << "-" << info(Q) << " ";
            Q = next(Q);
        }
        P = next(P);
    }
 }

