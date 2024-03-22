#include<iostream>
#include <vector>
using namespace std;

int main()
{   
    int l=0;
    vector<int> arr={2, 0, 4, 1, 3, 0, 28};
    for (int i=0;i<arr.size();){
        if (arr[i]==0){
            arr.erase(arr.begin()+i);
            l++;
    }   
        else{
            i++;
        }
    }
    for (int i=0;i<l;i++){
        arr.push_back(0);
    }
    for (int i=0 ;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}