#include<bits/stdc++.h>
using namespace std;

int trap(vector<int>& height) {
    int total=0;
    for(int i=0;i<height.size();++i){
        int maxl=0,maxr=0;
        int lefti = i;
        int righti = i;
        while(lefti>=0){
            maxl = max(maxl,height[lefti]);
            lefti--;
        }
        while(righti<height.size()){
            maxr = max(maxr,height[righti]);
            righti++;
        }
        int ch = min(maxl,maxr)-height[i];
        if(ch>=0){
            total += ch;
        }
    }
    return total;
}