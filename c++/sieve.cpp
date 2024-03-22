#include<iostream>
using namespace std;
#include<vector>
int main()
{
    int n;
    n=100;
    vector<bool> isPrime(n+1,true);
    int count=0;
    vector<int> prime;
    
    isPrime[0]=isPrime[1]=false;
    for (int i=2;i<n;i++){
        if (isPrime[i]){
            count++;
            prime.push_back(i);

        }
        for (int j=2*i;j<n;j+=i){
            isPrime[j]=0;
        }

    }
    
    cout<<count<<endl;
    for (int i=0;i<prime.size();i++){
        cout<<prime[i]<<" ";
    }
    return 0;
}