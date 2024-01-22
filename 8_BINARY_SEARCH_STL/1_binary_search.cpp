#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 4, 5, 8, 9};
    int n = sizeof(arr) / sizeof(int);
    bool res1 = binary_search(arr, arr + n, 3);
    cout << res1<<" if res1 is 0 means target element is not present in the sorted array."<<endl;
    bool res2 = binary_search(arr, arr + n, 4);
    cout << res2<<" if res1 is 1 means target element is present in the sorted array."<<endl;
}