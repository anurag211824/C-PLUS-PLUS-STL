#include <iostream>
#include <list>
using namespace std;

void display(list<int> &a)
{   //list<int>:: iterator iter=a.begin();
    //auto is like shortcut of getting an iterator
    for (auto iterr = a.begin(); iterr != a.end(); iterr++)
    {
        cout << *iterr << " ";
    }
    cout << endl;
}

int main()
{
    list<int> anurag;
    list<int> ujjawal;
    anurag.push_back(1);
    anurag.push_back(4);
    anurag.push_back(0);
    anurag.push_back(8);
    anurag.push_back(6);
    anurag.push_back(10);
    ujjawal.push_back(11);
    ujjawal.push_back(13);
    ujjawal.push_back(12);
    ujjawal.push_back(17);
    ujjawal.push_back(15);
    ujjawal.push_back(14);
    display(anurag);
    display(ujjawal);
    // swapping two lists
    //   anurag.swap(ujjawal);
    //   display(anurag);
    //   display(ujjawal);

    // sorting a list
    // anurag.sort();
    // display(anurag);

    // merging  two lists
    // anurag.merge(ujjawal);
    // display(anurag);

    // reversing a list
    // anurag.reverse();
    // display(anurag);

    // removing a particular element from a list
    // anurag.remove(4);
    // display(anurag);

    // poping element from the list back and front
    //  anurag.pop_back();
    //  display(anurag);
    //  anurag.pop_front();
    //  display(anurag);
    return 0;
}