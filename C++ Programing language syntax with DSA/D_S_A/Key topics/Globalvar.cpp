#include <iostream>
using namespace std;
int glb = 21;
int take()
{
    cout << glb;
    cout << endl;
    glb++;
}
int main()
{
    // Main muda is that Global variable
    // but Global variable usage is not good
    // bad practice
    take();
    cout << glb;

    return 0;
}