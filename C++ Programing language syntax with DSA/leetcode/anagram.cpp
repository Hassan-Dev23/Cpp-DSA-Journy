#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s = "hassan";
    string t = "ssanah";
    vector<int> v(26, 0);
    if (s.size() != t.size())
        return false;
    for (int i = 0; i < s.size(); i++)
    {
        v[s[i] - 'a']++;
    }
    for (int i = 0; i < t.size(); i++)
    {
        v[t[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++)
    {
        if (v[i] != 0)
            return false;
    }
    cout << true;

    return true;
}