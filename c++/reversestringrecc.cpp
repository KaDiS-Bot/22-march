#include<iostream>
using namespace std;

void reverse(string &strng,int s,int e){
    if(s>=e){
        return;
    }
    swap(strng[s],strng[e]);

    reverse(strng,s+1,e-1);
}
int main()
{
    string strng="love";
    reverse(strng,0,strng.length()-1);
    cout<<strng<<endl;
    return 0;
}