#include<bits/stdc++.h>
using namespace std;
void printMap(map<int,int> &mp){
    cout<<"key"<<"    "<<"value"<<endl;
    for(auto it=mp.begin();it!=mp.end();it++){
        cout<<it->first<<"    "<<"   "<<it->second<<endl;
    }
}
int main(){

    //map in STL are associative containers where each element consists of a key value and a mapped value. 
    //Two mapped values cannot have the same key value.
    map<int,int> mp1;
    mp1.insert({1,10});
    mp1.insert({2,20});
    mp1.insert({3,30});
    mp1.insert({4,40});
    mp1.insert({5,50});
    mp1[6]=60;
    printMap(mp1);
    //find function
    auto it1=mp1.find(3);//returns an iterartor pointing to the key value 3;
    cout<<"the value at key 3 is:";
    cout<<it1->second<<endl;
    auto it2=mp1.lower_bound(3);
    cout<<"the lower bound of key 3 is:";
    cout<<it2->second<<endl;
     cout<<"the upper bound of key 2 is:";
    auto it3=mp1.upper_bound(2);
    cout<<it3->second<<endl;


}