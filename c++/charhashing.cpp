// // #include<iostream>
// // using namespace std;

// // int main()
// // {
// //     char arr1[26];
// //     char start='a';
// //     for (int i=0;i<26;i++){
// //         arr1[i]=start++;
// //     }
// //     for (int i=0;i<26;i++){
// //         cout<<arr1[i]<<"";
// //     }
// //     return 0;
// // }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr1[26]={0};
//     char str[15]="abcdefdefdefdef";
//     for (int i=0;i<str.length();i++){
//         str[i]
//     }
    
//     return 0;
// }
#include<iostream>
using namespace std;

int main()
{
    string str="absdfvcsdf";
    // char ; 
    int arr1[26]={0};
    for (int i=0;i<str.length();i++){
        arr1[str[i]-'a']++;
    }
    
    for (int i=0;i<(sizeof(arr1)/sizeof(arr1[0]));i++){
        cout<<"count of "<<"is"<<arr1[i]<<endl;
    }
    return 0;
}