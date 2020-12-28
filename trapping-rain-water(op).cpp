#include<bits/stdc++.h>
using namespace std;
int trap(vector<int>& height) {
        int total=0,left=0,right=height.size()-1,leftmax=0,rightmax=0;
        while(left<right){
            if(height[left]<=height[right]){
                if(height[left]>=leftmax){
                    leftmax = height[left];
                }
                else{
                    total += leftmax - height[left];
                }
                left++;
            }
            else {
                if(height[right]>=rightmax){
                    rightmax = height[right];
                }
                else{
                    total += rightmax - height[right];
                }
                right--;
            }
        }
        return total;
    };