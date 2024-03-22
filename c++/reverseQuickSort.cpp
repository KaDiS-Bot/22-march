#include<iostream>
using namespace std;

int partition(int arr[],int s , int e){
    int cnt=0;
    int pivot=arr[s];
    for(int i=s+1;i<=e;i++){
        if(pivot>=arr[i]){
            cnt++;
        }
    }
    int pivotIndex=cnt+s;
    swap(arr[pivotIndex],arr[s]);
    int i=s;
    int j=e;


    while(pivotIndex>i && pivotIndex<j){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(pivotIndex>i && pivotIndex<j){
            swap(arr[i++],arr[j--]);
        }

    }
    return pivotIndex;

}

void quickSort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    int p=partition(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
    
}
int main()
{
    int s=0;
    int e=7;
    int arr[]={1,2,6,8,4,3,8,3};
    quickSort(arr,s,e);
    for (int i = 0; i <= e; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}