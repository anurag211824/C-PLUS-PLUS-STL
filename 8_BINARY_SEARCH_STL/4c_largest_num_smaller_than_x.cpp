#include<iostream>
#include<bits/stdc++.h>

using namespace std;
void larget_num_smaller_than_x(int *arr,int size,int target){
    int index=lower_bound(arr,arr+size,target)-arr;
    index--;
    if(index>=0)cout<<arr[index];
    else cout<<-1;
    cout<<endl;
}

int main(){
//find the largest number smaller than x in a sorted array if no number exits print -1
int arr[]={1,4,4,4,4,9,9,10,11};
int n=sizeof(arr)/sizeof(int);
larget_num_smaller_than_x(arr,n,4);
larget_num_smaller_than_x(arr,n,2);
larget_num_smaller_than_x(arr,n,1);
 
return 0;
}