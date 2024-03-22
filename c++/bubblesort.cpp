#include <iostream>
using namespace std;

int main()
{
    int arr[5]={10,5,33,1,0};
    int n=5;
    for (int i=1;i<n;i++){
        for (int j=0;j<n-1;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for (int j=0;j<n;j++){
        cout<<arr[j]<<endl;
    }
    return 0;
}