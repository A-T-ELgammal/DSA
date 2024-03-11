#include <iostream>

using namespace std;

// forward recursion
void foo1(int n)
{
    if (n > 0)
    {
        cout << n << "  ";
        foo1(n - 1);
    }
}
// backward recursion
void foo2(int n)
{
    if (n > 0)
    {
        foo2(n - 1);
        cout << n << "  ";
    }
}

int main2()
{
    foo1(3);
    cout << endl;
    foo2(3);
    return 0;
}