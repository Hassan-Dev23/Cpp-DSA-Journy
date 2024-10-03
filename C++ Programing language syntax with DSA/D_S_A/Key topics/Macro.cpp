#include <iostream>
using namespace std;
#define PI 3.14
#define MUl(a, b) (a * b)
#define num 1, \
            2
#define fum(a, b) (((a) < (b)) ? ("Hassan") : ("saira"))
int main()
{
    double pi = 3.14;
    int area = pi * 2 * 2;
    cout << area;
    cout << endl;
    cout << sizeof(PI);
    cout << endl;
    cout << MUl(5, 3);
    cout << endl;
    int arr[] = {num};
    cout << arr[0] << endl;
    cout << arr[1];
    cout << endl;
    cout << fum(19, 23);
}