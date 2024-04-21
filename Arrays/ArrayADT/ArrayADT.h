#include <cstdio>
class Array
{
    int *A, size, length = 0;

public:
    void scanInputArray()
    {

        printf("enter the array size: ");
        scanf("%d", &size);
        A = new int[size];
        printf("enter the number of length: ");
        scanf("%d", &length);
        printf("enter all the array length: ");
        for (int i = 0; i < length; i++)
            scanf("%d", &A[i]);
    }
    void displayArray()
    {
        for (int i = 0; i < size; i++)
            printf("%d", A[i]);
    }
    void appendElement(int el)
    {
        printf("enter the element to append to array:");
        scanf("%d", &el);
        A[length] = el;
        length++;
    }
};
