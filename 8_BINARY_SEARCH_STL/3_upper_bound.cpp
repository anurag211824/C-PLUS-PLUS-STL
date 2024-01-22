#include <bits/stdc++.h>
using namespace std;
int main()
{   //Upper bound is that STL which points to the greater element next to the target element only
    int arr[] = {1, 4, 5, 6, 9, 9};
    int n = sizeof(arr) / sizeof(int);
    int index1 = upper_bound(arr, arr + n, 4) - arr;
    cout << index1 << endl;
    int index2 = upper_bound(arr, arr + n, 7) - arr;
    cout << index2 << endl;
    int index3 = upper_bound(arr, arr + n, 10) - arr;
    cout << index3 << endl;

    //upperbound in vectors
    vector<int> v1;
    v1={1,4,5,6,9,9};
    int index4=upper_bound(v1.begin(),v1.end(),7)-v1.begin();
    cout<<index4<<endl;
}