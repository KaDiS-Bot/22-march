#include <iostream>
using namespace std;

int main(){
    int arr[5]={153,23,466,32,12};
    int n=5;
    for (int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if (arr[j]<arr[minIndex]){
                minIndex=j;
            }
        swap(arr[minIndex],arr[i]);
        }
    }
    for (int l=0;l<n;l++){
        cout<<arr[l]<<endl;
        
    }
    return 0;
}