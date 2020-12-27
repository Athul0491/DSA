#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
        for(int a1 =0;a1<nums.size()-1;++a1){
            int ntf = target - nums[a1];
            for(int j1=a1+1; j1<nums.size();++j1){
                if(nums[j1]==ntf){
                    return {a1,j1};
                }
            }
        }
        return {};
    }