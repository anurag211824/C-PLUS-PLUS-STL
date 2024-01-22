#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Lower boundaries  ideally that STL which returns the first occurrence of element if
    // its occur and if it does not occur than it will return the iterator pointing to the element
    // which is in immediate next of the given element.
    int arr[] = {1, 4, 5, 6, 9, 9};
    int n = sizeof(arr) / sizeof(int);
    int index1 = lower_bound(arr, arr + n, 4) - arr;
    cout << index1 << endl;
    int index2 = lower_bound(arr, arr + n, 7) - arr;
    cout << index2 << endl;
    int index3 = lower_bound(arr, arr + n, 10) - arr;
    cout << index3 << endl;

    //lowerbound in vectors
    vector<int> v1;
    v1={1,4,5,6,9,9};
    int index4=lower_bound(v1.begin(),v1.end(),7)-v1.begin();
    cout<<index4<<endl;
}