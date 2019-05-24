//
// Created by jeanlee on 24/05/19.
//

#include "UnionFInd.h"

UnionFInd::UnionFInd(int n):n{n} {
    for( int i = 0 ; i < n ; ++i ){
        vertice[i] = i;
        padre[i] = vertice[i];
    }
}

int UnionFInd::Find(int x){
    if( x == padre[x] )
        return x;
    else return Find(padre[x]);
}
void UnionFInd::Union(int x, int y) {
    int xPadre = Find( x );
    int yPadre = Find( y );
    padre[ xPadre ] = yPadre;
}
void UnionFInd::Mostrar() {
    cout<<"V - P"<<endl;
    for (int i = 0; i < n; ++i) {
        int v = vertice[i];
        cout << v << " - " << Find(v) << endl;
    }
}