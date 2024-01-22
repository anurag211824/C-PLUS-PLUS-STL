#include<bits/stdc++.h>
using namespace std;
int main(){
    //Linear data structure store largest element at start or top position
    //inside a priority queue a tree is maintained and it is also called a max heap
    priority_queue<int>pq1;
    pq1.push(2);
    pq1.push(5);
    pq1.push(11);
    pq1.push(0);
    pq1.push(3);
    pq1.emplace(9);
    pq1.push(10);//{11,10,9,5,3,2,0}
    cout<<pq1.top()<<endl;//prints 11
    pq1.pop();
    cout<<pq1.top();// prints 10



}