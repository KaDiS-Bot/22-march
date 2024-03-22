// // #include <iostream>
// // using namespace std;
// // // 1,1,2,3,5,8,13
// // void print(int n){
// //     if (n<0){
// //         return;
// //     }
// //     cout<<n<<endl;
// //     print(n-1);
// // }
// // int main() {
// //     print(10);
// //     return 0;
// // }

// #include<iostream>
// using namespace std;
// void fibb(int a, int b,int sum,int n ){
//     if (sum>n){
//         return;
//     }
//     cout<<sum<<endl;

//     b=a;

//     a=sum;
//     sum=a+b;
//     fibb( a, b, sum,n);

// }
// int main()
// {
//     int a=1;
//     int b=1;
//     int sum=0;
//     int n=100;
//     fibb(a,b,sum,n);
//     return 0;
// }


#include <iostream>
using namespace std;
#include <map>
#include <vector>
#include <bits/stdc++.h>
vector<int> getFrequencies(vector<int> &v, int n)
{
    map<int, int> mpp;
    vector<int> ans1;
    vector<int> ans2;
    for (int i = 0; i < n; i++)
    {
        mpp[v[i]]++;
    }

    // for (auto it : mpp)
    // {
        // ans2.push_back(it.first);
        // ans1.push_back(it.second);
    // }
    // int max = *max_element(ans1.begin(), ans1.end());
    // int min = *min_element(ans1.begin(), ans1.end());
    for (auto it: mpp){
        
    }
    // return ans1;
}

int main()
{
    vector<int> v = {1, 2, 3, 1, 1, 4};
    int n = v.size();
    vector<int> anss = getFrequencies(v, n);
    for (int i = 0; i < n; i++)
    {
        cout << anss[i]<< endl;
    }

    return 0;
}
