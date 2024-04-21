#include <cstdio>
class Array
{
    int *A, size, elements, length = 0;

public:
    void scanInputArray()
    {

        printf("enter the array size: ");
        scanf("%d", &size);
        A = new int[size];
        printf("enter the number of elements: ");
        scanf("%d", &elements);
        printf("enter all the array elements: ");
        for (int i = 0; i < elements; i++)
            scanf("%d", &A[i]);
    }
    void displayArray()
    {
        for (int i = 0; i < size; i++)
            printf("%d", A[i]);
    }
};
