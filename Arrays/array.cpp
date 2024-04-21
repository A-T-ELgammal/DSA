#include <iostream>
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
    // int *p = new int[3];
    // p[0] = 1;
    // p[1] = 2;
    // p[2] = 3;
    // int *q = new int[4];
    // for (int i = 0; i < 3; i++)
    //     q[i] = p[i];
    // p = q;
    // q = nullptr;
    // delete[] q;
    // for (int i = 0; i < 4; i++)
    //     cout << p[i];
    ///////////////////
    // 2D Array dedfinition
    // int A[1][2] = {{1, 2}}; // in stack
    // int *B[1];              // int heap using pointer row in stack and column in heap
    // B[0] = new int[2];
    // int **C = new int *[2];
    // C[0] = new int[3];
    // C[1] = new int[3];
    // for (int i = 0; i < 2; i++)
    //     for (int j = 0; j < 3; j++)
    //         cout << C[i][j] << endl;
    /////////////////////
    return 0;
}