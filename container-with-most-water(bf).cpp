#include<bits/stdc++.h>
using namespace std;
int maxArea(vector<int>& height) {
    int max = 0;
    for(int i = 0; i<height.size(); ++i){
        for(int j=i+1; j<height.size(); ++j){
            if((min(height[i],height[j]) * (j-i) )>max){
                max = min(height[i],height[j]) * (j-i);
            }
        }
    }
    return max;
}