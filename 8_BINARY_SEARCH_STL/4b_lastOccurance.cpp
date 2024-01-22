#include<iostream>
#include<bits/stdc++.h>

using namespace std;
void lastOccurance(int *arr,int size,int target){
    int index=upper_bound(arr,arr+size,target)-arr;
    index--;
    if(index>=0 &&arr[index]==target)
    cout<<index;
    else 
    cout<<-1;
    cout<<endl;
}

int main(){
//Find the last occurrence of X in a sorted array if it does not exist print -1
int arr[]={1,4,4,4,4,9,9,10,11};
int n=sizeof(arr)/sizeof(int);
lastOccurance(arr,n,4);
lastOccurance(arr,n,2);
lastOccurance(arr,n,0);
return 0;
}