#include <iostream>
#include <string>
using namespace std;
void reversestr(string &str, int i)
{
    if (i > (str.length() - 1) - i)
        return;
    swap(str[i], str[(str.length() - 1) - i]);
    i++;
    reversestr(str, i);
}
int main()
{
    string str = "hassan is good boy";
    int i = 0;

    reversestr(str, i);
    cout << str;
}