#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1 = "abcdefgh";
    string s = string(1, str1[str1.size() - 2]) + str1[str1.size() - 1];
    str1.erase(str1.size() - 2, str1.size() - 1);
    str1 = s + str1;
    cout << str1;
}