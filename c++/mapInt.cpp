#include<iostream>
using namespace std;
#include<map>
#include<vector>
int main()
{
    vector<int> arr={1,2,3,2,2,2,43,21,1,3};
    int n=10;
    map <int,int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    // for (int i = 0; i < 100; i++)
    // {
    //     if (mpp[i]!=0){
    //         cout<<"value of "<< i <<" is "<<mpp[i]<<endl;
    //     }
    // }
    for (auto it:mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    return 0;
}