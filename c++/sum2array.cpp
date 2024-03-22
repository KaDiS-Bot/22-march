#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main()
{ 
vector<int> a ={4,5,1};
 int n=3;
vector<int> b={3,4,5};
int m=3;
int arr1sum=0;
int arr2sum=0;
for (int i=0;i<n;i++){
    arr1sum=arr1sum*10+a[i];
}
for (int i=0;i<m;i++){
    arr2sum=arr2sum*10+b[i];
}
int finalSum=arr1sum+arr2sum;
// cout<<finalSum<<endl;
vector<int> fina;
while(finalSum>0){
    fina.push_back(finalSum%10);
    finalSum=finalSum/10;
    
}

    vector<int> truee;
    reverse_copy(fina.begin(), fina.end(), back_inserter(truee));
for (int i=0;i<4;i++){
    cout<<truee[i]<<endl;
}
return 0;
}