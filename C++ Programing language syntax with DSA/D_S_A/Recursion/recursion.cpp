#include <iostream>
using namespace std;
int counting(int n)
{
    if (n == 0)
        return 1;

    return n * counting(n - 1);
}
int mainr()
{
    int n;
    cin >> n;
    cout << counting(n);
    return 0;
}

int factorial(int n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int number = 5;
    cout << "Factorial of ";
    cout << number << " is: ";
    cout << factorial(number);
    cout << endl;
}
