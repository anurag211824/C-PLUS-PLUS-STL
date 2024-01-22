#include<iostream>
#include<bits/stdc++.h>

using namespace std;
void firstOccurance(int *arr,int size,int target){
    int index=lower_bound(arr,arr+size,target)-arr;
    if(index!=size &&arr[index]==target)
    cout<<index;
    else 
    cout<<-1;
    cout<<endl;
}

int main(){
//Find the first occurrence of X in a sorted array if it does not exist print -1
int arr[]={1,4,4,4,4,9,9,10,11};
int n=sizeof(arr)/sizeof(int);
firstOccurance(arr,n,4);
firstOccurance(arr,n,2);
firstOccurance(arr,n,12);
return 0;
}