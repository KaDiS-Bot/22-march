#include<iostream>
using namespace std;

int main()
{
    string s = "daabcbaabcbc";
    string part = "abc";
    // string neew="";
    // int m=part.length();
    // for (int i=0;i<13;i++){ 
    //     string temp="";
    //     temp.push_back(i-2);
    //     temp.push_back(i-1);
    //     temp.push_back(i);
    //     if (temp==part){
    //         cout<<s[i]<<s[i+1]<<s[i+2];
    //     }
    // return temp;
    // }
    // for (int i=0;i<temp.length();i++){
    //     cout<<temp[i]<<endl;
    // }
    
    while (s.length()!=0 && s.length()>part.length()){
        s.erase(s.find(part),part.length());
    }
    for (int i=0;i<s.length();i++){
        cout<<s[i]<<endl;
    }
    return 0;
}