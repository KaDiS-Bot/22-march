#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> nums = {3,1,-2,-5,2,-4};
    int size=nums.size();
    vector<int> positive;
    vector<int> negative;
    vector<int> final;
    
    for (int i=0;i<size;i++){
        if (nums[i]>0){
            positive.push_back(nums[i]);
        }
        else{
            negative.push_back(nums[i]);
        }

    }
    for (int l=0;l<size;l++){
        if (nums[l]!=0){
            final.push_back(positive[l]);
            final.push_back(negative[l]);
        }
    }
    for (int m=0;m<size;m++){
        cout<<final[m]<<endl;
    }
    return 0;
}