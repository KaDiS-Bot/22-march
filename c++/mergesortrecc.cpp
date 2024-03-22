#include<iostream>
using namespace std;
#include<vector>
void merge(int *arr,int s,int mid,int e){
    // mid=(s+e)/2;
    vector<int> temp;
    int left=s;
    int right = mid+1;
    while (left<=mid && right <=e){
        if (arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }

    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }

    while(right<=e){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i=s;i<=e;i++){
        arr[i]=temp[i-s];
    }

}

void mergeSort(int arr[],int s,int e){
    int mid=(s+e)/2;
    if (s>=e){
        return;
    }
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,mid,e);

    return;
}

int main()
{
    int arr[18]={2,4,3,2,1,3,4,6,8,9,10,11,22,31,2,23,43,89};
    int s=0;
    int e=17;
    mergeSort(arr,s,e);
    for (int i=0;i<17;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}

