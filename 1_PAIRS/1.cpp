#include <bits/stdc++.h>
using namespace std;
int main()
{
    // a simple pair of integer data type
    pair<int, int> p1 = {1, 2};
    cout << p1.first << " " << p1.second << endl;

    // a nested pair of integer data type
    pair<int, pair<int, int>> p2 = {1, {2, 3}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;

    // a pair of array data type
    pair<int, int> arr[] = {{1, 2}, {2, 5}, {4, 5}, {6, 7}};
    cout << arr[1].first << endl;
}