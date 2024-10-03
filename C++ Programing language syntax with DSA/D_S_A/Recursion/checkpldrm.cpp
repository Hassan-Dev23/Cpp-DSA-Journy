#include <iostream>
#include <string>
using namespace std;
bool reversestr(string &str, int i)
{
    if (i > (str.length() - 1) - i)
        return true;
    if (str[i] != str[(str.length() - 1) - i])
        return false;
    i++;
    reversestr(str, i);
}
int main()
{
    string str = "hasuah";
    int i = 0;

    cout << reversestr(str, i);
}