//
// Created by jeanlee on 24/05/19.
//

#ifndef UNIONFIND_UNIONFIND_H
#define UNIONFIND_UNIONFIND_H

#include <array>
#include <iostream>

using namespace std;

class UnionFInd {
    int n;
    array<int,100> padre;
    array<int,100> vertice;
public:
    explicit UnionFInd(int n);
    int Find(int x);
    void Union(int x, int y);
    void Mostrar();
};


#endif //UNIONFIND_UNIONFIND_H
