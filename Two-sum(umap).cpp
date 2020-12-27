#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> umap;
    
    for(int a=0; a<nums.size();++a){
        int ntf = target - nums[a];

        if (umap.find(ntf) != umap.end()){
            return {a,umap[ntf]};
        }
        umap[nums[a]]=a;

    }
    
    return {};
}
