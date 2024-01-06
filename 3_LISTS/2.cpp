#include<bits/stdc++.h>
using namespace std;
void Display(list<int> &a)
{   //list<int>:: iterator iter=a.begin();
    //auto is like shortcut of getting an iterator
    for (auto iterr = a.begin(); iterr != a.end(); iterr++)
    {
        cout << *iterr << " ";
    }
    cout << endl;
}
int main(){
    //1.list declaration and pushing back elements
    list<int>l1;
    l1.push_back(1);
    l1.push_back(2);
    l1.emplace_back(3);
    Display(l1);


    //2.push front opearation
    list<int> l2;
    l2.push_back(4);
    l2.push_back(4);
    l2.push_back(3);
    Display(l2);
    l2.push_front(9);
    Display(l2);
    l2.emplace_front(3);
    Display(l2);

}