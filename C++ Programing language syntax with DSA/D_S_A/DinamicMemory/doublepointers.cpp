#include <iostream>
#include <string>

using namespace std;
void point(int **p)
{
    (**p)++;
}
int main()
{
    int n = 10;
    int *pointe = &n;
    int **p = &pointe;
    point(p);
    cout << *pointe << endl;

    cout << *p;

    return 0;
}