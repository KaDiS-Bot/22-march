#include<iostream>
using namespace std;

int hashh(int arr1[],int arr2[],int arr1_size,int arr2_size){
    int pointer=0;
    while(arr1_size>pointer){
        arr2[arr1[pointer]]++;
        pointer++;
    }
    return *arr2;
}
int main()
{
    int arr1[10]={1,1,2,3,4,3,2,3,4,10};
    int arr2[12]={0};
    hashh(arr1,arr2,10,10);
    for (int i=1;i<11;i++){
        if(arr2[i]==0){

        }
        else{
        cout<<i<<" appears "<<arr2[i]<<"times"<<endl;
    }
    }
    return 0;
}