#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vector;
    cout << vector.size() << endl
         << vector.capacity() << endl;

    vector.push_back(5);
    vector.push_back(5);
    vector.push_back(7);

    // cout << vector.size() << endl
    //      << vector.capacity() << endl;

    for (int i = 0; i < vector.size(); i++)
    {
        cout << vector[i] << " ";
    }
    vector.insert(vector.begin() + 2, 20);
    cout << endl;
    for (auto i : vector)
    {
        cout << i << " ";
    }
    cout << endl;
    vector.push_back(23);
    vector.push_back(25);
    vector.push_back(25);
    vector.push_back(26);
    vector.push_back(32);

    for (auto i : vector)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << binary_search(vector.begin(), vector.end(), 32);
}