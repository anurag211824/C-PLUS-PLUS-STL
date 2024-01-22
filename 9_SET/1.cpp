#include <bits/stdc++.h>
using namespace std;
void printSet(set<int> &s)
{
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
}
int main()
{   //set is stl which stores element in sorted and unique manner.
    //1. Insert function--> It stores element in sorted and unique manner.
    set<int>s1;
    s1.insert(3);
    s1.insert(3);
    s1.insert(1);
    s1.insert(5);
    s1.insert(0);
    s1.insert(2);
    s1.insert(0);
    s1.insert(6);
    printSet(s1);


    //2. A.Beigin function --> It returns an iterator pointing to the firts element of the set.
    //   B.End function --> It returns an iterator pointing after the last element of the set.
    set<int>s2;
    s2.insert(0);
    s2.insert(2);
    s2.insert(0);
    s2.insert(6);
    auto it1=s2.begin();
    auto it2=s2.end();
    printSet(s2);
    cout<<*it1<<endl;
    cout<<*(it2)<<endl;//prints a garbage value as it is pointing out of the set


    // 3. count() – returns true or false based on whether the element is present in the set or not.
    set<int>s3;
    s3.insert(2);
    s3.insert(4);
    s3.insert(3);
    s3.insert(3);
    s3.insert(7);
    s3.insert(9);
    printSet(s3);
    int cnt=s3.count(7);
    cout<<cnt<<endl;


    // 4.clear() – deletes all the elements in the set.
    set<int>s4;
    s4.insert(6);
    s4.insert(4);
    s4.insert(1);
    s4.insert(3);
    s4.insert(8);
    s4.insert(9);
    printSet(s3);
    s4.clear();
    printSet(s4);
    cout<<"set is clear"<<endl;
    

    // 5.find() – to search an element in the set.
    set<int> s5;
    s5.insert(5);
    s5.insert(3);
    s5.insert(9);
    s5.insert(7);
    s5.insert(3);
    printSet(s5);
    auto it3=s5.find(5);// returns an iterator pointing to five
    cout<<*(it3)<<endl;
    auto it4=s5.find(11);//returns an iterator pointing after the last element of the set


    // 6.erase() – to delete a single element or elements between a particular range.
    // s.erase(iterator);
    //s.erase(iterator1 ,iterator2);


    // 7.size() – returns the size of the set.
    //s.size();

    // 8.empty() – to check if the set is empty or not.
    //s.empty()


    // 9. lower_bound and upper_bound same as vector
    set<int> s6;
    s6.insert(1);
    s6.insert(4);
    s6.insert(10);
    s6.insert(8);
    s6.insert(9);
    s6.insert(10);
    printSet(s6);
    auto it5=s6.lower_bound(2);
    auto it6=s6.upper_bound(8);
    cout<<*(it5)<<endl;
    cout<<*(it6)<<endl;
    

}