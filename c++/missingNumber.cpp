#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums={1,4,0,2};
    sort(nums.begin(),nums.end());
    vector<int> newnums;
    for (int i=0;i<=nums.size();i++){
        newnums.push_back(i);
    }
    // for (int i = 0; i < newnums.size(); i++)
    // {cout<<newnums[i]<<" "<<endl;
    // }
    
    for (int i=0;i<newnums.size();i++){
        for(int j=0;j<nums.size();j++){
            if(nums[j]==newnums[i]){
                continue;
            }
            else{
                cout<<newnums[j];
                break;
            }
        }
    }
    return 0;
}