#include <bits/stdc++.h>
using namespace std;
void Display1(vector<int> &v)
{
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
}
void Display2(vector<int> &v)
{
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
}

int main()
{
    //1.Declaration a vector and pushing elements into it.
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.emplace_back(5);
    Display1(v1);


    //2. Vector of pairs
    vector<pair<int,int>> v2;
    v2.push_back({1,3});
    v2.push_back({4,5});
    v2.emplace_back(2,3);
    cout<<v2[2].second<<endl;


    //3. Intializing  a vector with a particular size and a particular element at all place
    vector<int> v3(5,18);
    Display2(v3);


    //4.Making a copy a vector in the another vector
    vector<int> v4(5,20);
    vector<int> v5(v4);
    Display2(v5);


    //5.Accesing a vector
    vector<int> v6={9,8,7,6,5,4};
    cout<<v6[2]<<" "; //just like normal arrays
    cout<<v6.at(3)<<" ";//another way
    cout<<v6.back()<<endl;//for accesing last element of the vector


    //6.Accessing through STL iterators
    vector<int> v7={2,4,8,3,0,7,2};
    vector<int>::iterator it=v7.begin();
    cout<<*(it)<<" ";
    it++;
    cout<<*(it)<<" ";
    it=it+2;
    cout<<*(it)<<endl;


    //7.Printing vectors
   //void Display1(vector<int> &v)
// {
//     for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//     {
//         cout << *(it) << " ";
//     }
//     cout << endl;
// }
  //void Display2(vector<int> &v)
// {
//     for (auto it = v.begin(); it != v.end(); it++)
//     {
//         cout << *(it) << " ";
//     }
//     cout << endl;
// }


   //8.Deleting a vector
   vector<int> v8={3,5,6,3,27,4};
   Display1(v8);
   v8.erase(v8.begin()+3);//delete a single element
   Display2(v8);
   vector<int> v9={5,3,2,8,0,5,3,2,56};
   Display1(v9);
   v9.erase(v9.begin()+3,v9.begin()+6); //delete a particular section of a vectors
   Display2(v9);
   

   //9.Inserting function
   vector<int> v10(2,9);
   Display1(v10);
   v10.insert(v10.begin(),3,100);
   Display2(v10);
   v10.insert(v10.begin()+4,3,55);
   Display2(v10);
   

   //10. Size of a vector
   vector<int> v11={2,6,4,67,78};
   cout<<v1.size()<<endl;

   
   //11.Pop_back
   vector<int> v12={1,3,2,3,3,4,5};
   v12.pop_back();// delete the last element in the vector


   //12.Swap function
   vector<int> v13={1,2,3,4};
   Display1(v13);
   vector<int> v14={4,5,6,7};
   Display2(v14);
   v14.swap(v13);
   Display1(v14);
   Display2(v13);


   //13.Clear function
   vector<int> v15={4,7,6,4,4,3,3};
   Display1(v15);
   v15.clear();
   Display2(v15);


   // emepty function
   vector<int> v16={1,3,4,45,5};
   cout<<v16.empty()<<endl;
   vector<int>v17={};
   cout<<v17.empty();

    


    return 0;
}