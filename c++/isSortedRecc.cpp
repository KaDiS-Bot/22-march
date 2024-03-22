// #include<iostream>
// using namespace std;

// bool isSorted(int arr[],int size){
//     if ((size==0)|| (size==1)){
//         return true;
//     }
//     if(arr[0]>arr[1]){return false;}
//     else{
//         bool remainingPart = isSorted(arr+1,size-1);
//         return remainingPart;
//     }
        
    
// } 
// int main()
// {
//     int arr[5]={0,2,3,5,7};
//     if (isSorted(arr,5)==true){
//         cout<<"isSorted"<<endl;
//     }
//     else{
//         cout<<"not SOrted"<<endl;
//     }

//     return 0;
// }


#include<iostream>
using namespace std;

int summ(int arr[],int size){
    if (size==1){
        return arr[0];
    }
    return arr[size-1] + summ(arr,size-1);
}

int main()
{
    int arr[]={1,2,3,4,5};
    int size=5;
    int nnew=summ(arr,size);
    cout<<nnew<<endl;
    return 0;
}