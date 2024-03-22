#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int>nums ={1,2,3,4,5,6,7};
    int k = 3;
    vector<int> temp(nums.size());
    for (int i=0;i<nums.size();i++){
        temp[(i+k)%nums.size()]=nums[i];
    }
    for (int i=0;i<nums.size();i++){
    cout<<temp[i]<<endl;}
    return 0;
}