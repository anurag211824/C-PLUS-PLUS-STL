#include<iostream>
#include<bits/stdc++.h>

using namespace std;
void smallest_num_greater_than_x(int *arr,int size,int target){
    int index=upper_bound(arr,arr+size,target)-arr;
    if(index<size)cout<<arr[index];
    else cout<<-1;
    cout<<endl;
}

int main(){
//find the largest number smaller than x in a sorted array if no number exits print -1
int arr[]={1,4,4,4,4,9,9,10,11};
int n=sizeof(arr)/sizeof(int);
smallest_num_greater_than_x(arr,n,4);
smallest_num_greater_than_x(arr,n,2);
smallest_num_greater_than_x(arr,n,1);
smallest_num_greater_than_x(arr,n,11);

 
return 0;
}