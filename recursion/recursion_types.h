#include <iostream>

using namespace std;

void tailRecursion(int n)
{
    if (n > 0)
    {
        cout << n << endl;
        tailRecursion(n - 1);
    }
}

void tailRecursionToLoop(int n)
{
    while (n > 0)
    {
        cout << n << endl;
        n--;
    }
}

////////////////////////////////////

void headRecursion(int n)
{
    if (n > 0)
    {
        headRecursion(n - 1);
        cout << n;
    }
}

void headRecursionToLoop(int n)
{
    int i = 1;
    while (i <= n)
    {
        cout << i << endl;
        i++;
    }
}

void treeRecursion(int n)
{
    if (n > 0)
    {
        cout << n << " , ";
        treeRecursion(n - 1);
        treeRecursion(n - 1);
    }
}
void indirectRecursionB(int n);

void indirectRecursionA(int n)
{
    if (n > 0)
    {
        cout << n << endl;
        indirectRecursionB(n - 1);
    }
}

void indirectRecursionB(int n)
{
    if (n > 1)
    {
        cout << n << endl;
        indirectRecursionA(n / 2);
    }
}

int nestedRecursion(int n)
{
    if (n > 100)
        return n - 10;
    return nestedRecursion(nestedRecursion(n + 11));
}