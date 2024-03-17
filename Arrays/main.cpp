#include <iostream>
#include "array-representation/Array_representation.h"

using namespace std;
int main()
{
    // Arrays

    // int A[3] = {1, 3, 4};
    // int *p;
    // p = new int[3];
    // p[1] = 3;
    // cout << p[1];
    // delete[] p;
    // printArray(A, 3);
    ////////////
    // resize array in heap
    int *p = new int[3];
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    int *q = new int[4];
    for (int i = 0; i < 3; i++)
        q[i] = p[i];
    p = q;
    q = nullptr;
    delete[] q;
    for (int i = 0; i < 4; i++)
        cout << p[i];
    ///////////////////
    return 0;
}