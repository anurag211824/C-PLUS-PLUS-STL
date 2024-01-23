#include <bits/stdc++.h>
using namespace std;
void printMultiSet(multiset<int> &s)
{
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
}
int main()
{ // 1.everything is same as set but multiset stores duplicate elements also
    multiset<int> ms1;
    ms1.insert(1);
    ms1.insert(1);
    ms1.insert(1);
    ms1.insert(2);
    ms1.insert(4);
    ms1.insert(0);
    ms1.insert(0);
    ms1.insert(3);
    ms1.insert(5);
    ms1.insert(5);
    printMultiSet(ms1);
    // 2.count and erase function
    multiset<int> ms2;
    ms2.insert(1);
    ms2.insert(1);
    ms2.insert(1);
    ms2.insert(1);
    ms2.insert(2);
    ms2.insert(2);
    printMultiSet(ms2);
    ms2.erase(1); // all ones are erased
    printMultiSet(ms2);
    int cnt = ms2.count(2); // gives the count of 2 present in the multiset
    cout << cnt << endl;

    multiset<int> ms3;
    ms3.insert(1);
    ms3.insert(1);
    ms3.insert(4);
    ms3.insert(1);
    ms3.insert(5);
    ms3.insert(6);
    ms3.insert(1);
    ms3.insert(1);
    ms3.insert(1);
    ms3.insert(1);
    printMultiSet(ms3);
    ms3.erase(ms3.find(4));
    printMultiSet(ms3);
    // ms3.erase(ms3.find(1),ms3.find(1)+2);
    // lowerbound and upper bound do not works in multiset

    // An unordered set in STL is a container that stores unique elements in no particular order. 
    // Every operation on an unordered set takes O(1) complexity in the average case and takes O(n) in the worst case.
}