#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>nums={2,4,6,8,10,8,5};
    int left=0; int right=nums.size()-1;
    //using binary search concept...
    int mid=(left+right)/2;
    while(left<=right){
        if(mid!=0 && nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1])break;
        else if(nums[mid]< nums[mid+1]){
            left=mid+1;
            mid=(left+right)/2;
        }
        else {
            right=mid-1;
            mid=(left+right)/2;
        }
    }

    cout<<mid<<" ";
    return 0;
}
