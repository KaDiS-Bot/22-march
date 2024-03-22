// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[5]={100,54,49,60,11};
//     int n=5;
//     for(int i=1;i<n;i++){
//         int temp=arr[i];
//         int j=i-1;
//         for (;j>=0;j--){
//             if (arr[j]>temp){
//                 arr[j+1]=arr[j];

//             }
//             else{
//                 break;
//             }
//         arr[j]=temp;
//         }
//     }
//     for (int t=0;t<5;t++){cout<<arr[t]<<endl;}
    
//     return 0;
// }

#include<iostream>
using namespace std;
#include<vector>
void insertionSort(int n, vector<int> &arr){
    
    for(int i = 1; i<n; i++) {
        int temp = arr[i];
        int j = i-1;
        for(; j>=0; j--) {
            
            if(arr[j] > temp) {
                //shift
                arr[j+1] = arr[j];
            }
            else { // ruk jao
                break;
            }
            
        }
        //copy temp value
        arr[j+1] = temp;  
    } 
}
int main()
{   vector<int> arr={100,4,22,2,1};
    insertionSort(5,arr);
    for (int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    
    return 0;
}