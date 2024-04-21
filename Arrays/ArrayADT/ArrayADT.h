#include <cstdio>
#include <stdexcept>
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
    void insertElement(int index, int el)
    {
        if (index >= 0 && index <= length)
        {
            for (int i = length; i > index; i--)
                A[i - 1] = A[i];
            A[index] = el;
            length++;
            return;
        }
        throw std::invalid_argument("index must be less than length");
    }

    void deleteElement(int index)
    {
        if (index >= 0 && index <= length)
        {
            for (int i = index; i < length - 1; i++)
                A[i] = A[i + 1];
            length--;
        }
        throw std::invalid_argument("index must be less than length");
    }
};
