#include<bits/stdc++.h>
using namespace std;
int main(){
    //1.It is a linear data structure follows first in first out principal
    queue<int> q1;
    q1.push(1);//{1}
    q1.push(3);//{1,3};
    q1.push(5);//{1,3,5}
    q1.emplace(6);//{1,3,5,6}

    q1.back()+=5;
    cout<<q1.back()<<endl;//prints 11
    queue<int> q2;
    q2.push(3);
    q2.push(4);
    q2.push(9);
    q2.push(7);//{3,4,9,7}
    cout<<q2.front()<<endl; //prints 3
    q2.pop();//{4,9,7}
    cout<<q2.front()<<endl;


}