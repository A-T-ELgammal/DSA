#include <iostream>
#include "recursion/tracing.h"
#include "recursion/recursion_using_static&global.h"
#include "recursion/recursion_types.h"
#include "Arrays/array-representation/Array_representation.h"
#include "Arrays/ArrayADT/ArrayADT.h"

using namespace std;

int main()
{
    // Recursion

    // tailRecursion(3);
    // tailRecursionLoop(3);
    // headRecursionToLoop(4);
    // treeRecursion(3);
    // indirectRecursionA(20);
    // cout << nestedRecursion(95);
    Array arr;
    arr.scanInputArray();
    arr.displayArray();
    // arr.appendElement(3);
    // arr.displayArray();
    arr.insertElement(3, 1);
    arr.displayArray();

    return 0;
}
