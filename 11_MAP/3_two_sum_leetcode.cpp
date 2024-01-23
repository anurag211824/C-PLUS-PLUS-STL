#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target)
{
    int n = nums.size();
    vector<int> ans;
    map<int, int> hashmap;
    for (int i = 0; i < n; i++)
    {
        int a = target - nums[i];
        auto it1 = hashmap.find(a);
        auto it2 = hashmap.end();
        if (it1 = it2)
            hashmap.insert({nums[i], i});
        else if (it1 != it2)
        {
            ans.push_back(i);
            ans.push_back(it1->second);
        }
    }
    return ans;
}
void printVector(vector<int> &v)
{
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v = {2, 7, 11, 15};
    int target = 9;
    vector<int> res = twoSum(v, target);
    printVector(res);
}