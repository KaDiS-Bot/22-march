#include<iostream>
using namespace std;
#include<unordered_map>
int main()
{
    unordered_map<char,int>mpp;
    string str="adakdsjdsakdsakadsjksfbjewuywiowqiqwowisnjkcmssjkskjhssajdksajk";
    for (int i=0;i<str.length();i++){
        mpp[str[i]]++;
    }
    for(auto it :mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    return 0;
}