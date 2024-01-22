#include<bits/stdc++.h>
using namespace std;
int main(){
    //Priority queue is a linear data structure which stores smallest element at top or start
    //inside a priority queue a tree is maintained and it is also called a min heap

    priority_queue<int,vector<int>,greater<int>> pq1;
    pq1.push(3);
    pq1.push(2);
    pq1.push(11);
    pq1.push(1);
    pq1.push(5);//{1,2,3,5,11}
    cout<<pq1.top()<<endl;//prints 1

    
}