#include <iostream>
using namespace std;
int main()
{
    int ba[] = {1, 2, 3, 4, 5, 6, 777, 77, 776, 54};
    int b = 1;
    int a = 3;
    int *p = &b;
    cout << *p << endl;
    *p = *p + 1;
    cout << *p << endl;
}