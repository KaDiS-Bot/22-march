#include<iostream>
using namespace std;
#include<vector>
#include <bits/stdc++.h>
// int merge(int arr1[],int m,int arr2[],int n,int arr3[]){
//     for 
// }
int main()
{
    vector<int> arr1={1,3,6,8,9};
    vector<int> arr2={2,4,7};
    vector<int> arr3;
    // int merge(arr1,5,arr2,3,arr3);
    for (int i=0;i<5;i++){
        arr3.push_back(arr1[i]);
    }
    for (int i=0;i<4;i++){
        arr3.push_back(arr2[i]);
    }
    sort(arr3.begin(),arr3.end());
    arr1=arr3;
    for (int i=0;i<8;i++){

        cout<<arr1[i]<<endl;
    }
    return 0;
}