#include <iostream>

using namespace std;

static int x = 0;

// using local variable to sum
int fun1(int n)
{
    if (n > 0)
        return fun1(n - 1) + n;
    return 0;
}

// using static variable
int fun2(int n)
{
    if (n > 0)
    {
        x++;
        return fun2(n - 1) + x;
    }

    return 0;
}

int main()
{
    cout << fun1(5) << endl;
    cout << fun2(5);
    cout << "\nsecond call with double value: " << fun2(5);

    return 0;
}
