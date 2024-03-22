// // // #include<iostream>
// // // using namespace std;

// // // // int factorial(int n ){
// // // //     if(n==1){
// // // //         return 1;
// // // //     }
// // // //     return n * factorial(n-1);
// // // // }

// // // // int main()
// // // // {
// // // //     int neww = factorial(31);
// // // //     cout<<neww<<endl;
// // // //     return 0;
// // // // }

// // // int power(int n){
// // //     if (n==0){
// // //         return 1;
// // //     }
// // //     int ans=2*(power(n-1));
// // //     return ans;
// // // }

// // // int main()
// // // {   int n=5;

// // //     int anss=power(n);
// // //     cout<<anss<<endl;
// // //     return 0;
// // // }


// // #include<iostream>
// // using namespace std;

// // int count(int n){
// //     if (n==0){
// //         return 0;
// //     }
// //     int countt=n+(count(n-1));
// //     return countt;
// // }
// // int main()
// // {
// //     int n=69;
// //     int ans = count(n);
// //     cout<<ans<<endl;
// //     return 0;
// // }a

// #include<iostream>
// using namespace std;

// void print(int n){
//     if(n>=111){
//         return;
//     }
//     cout<<n<<endl;
//     print(n+1);
// }

// int main()
// {
//     int n=1;
//     print(n);
//     return 0;
// }


#include<iostream>
using namespace std;
void print(int n){
    if (n==110){
        return ;
    }
    cout<<n<<endl;
    print(n+1);

}
int main()
{
    print(1);
    return 0;
}