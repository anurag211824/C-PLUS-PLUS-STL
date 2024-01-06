#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> s1;
    s1.push(1);//{1}
    s1.push(2);//{2,1}
    s1.push(3);//{3,2,1}
    s1.push(4);//{4,3,2,1}
    s1.emplace(5);//{5,4,3,2,1}
    cout<<s1.top()<<endl; //print 5
    s1.pop();//{4,3,2,1}
    cout<<s1.top()<<endl;//prints 4
    cout<<s1.size()<<endl; //prints 4
    cout<<s1.empty()<<endl;//prints 0 or 1 wheather the stack in empty or not

    stack<int>s2;
    s2.push(2);
    s2.push(3);
    s2.push(6);
    s2.push(7);
    stack<int>  s3;
    s3.push(3);
    s3.push(2);
    s3.push(4);
    s2.swap(s3);
    cout<<s3.top()<<endl;
}