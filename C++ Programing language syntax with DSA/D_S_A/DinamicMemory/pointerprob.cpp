#include <iostream>
using namespace std;

int main()
{
    int n1 = 1;
    int n2 = 2;
    int *p = &n1;
    cout << p << endl;
    (*p)++;
    cout << p << endl;

    cout << n1 << "   and   " << n2 << endl;
    cout << *p;

    return 0;
}