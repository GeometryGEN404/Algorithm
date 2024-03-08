#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int solution(vector<int>& nums,int target,int left,int right){
        int mid=(left+right)/2;
        int num=nums[mid];
        if(left>right)
            return -1;
        if(num<target)
            return solution(nums,target,mid+1,right);//mid+1
        else if(num>target)
            return solution(nums,target,left,mid-1);//mid-1,否则会陷入死循环
        else if(num==target)
            return mid;
        return -1;
    }

    int search(vector<int>& nums, int target) {
        return solution(nums,target,0,nums.size()-1);
    }
};

int main(){
    Solution s;
    vector<int>nums(6,0);
    nums={-1,0,3,5,9,12};
    int target=2;
    cout<<s.search(nums,target);
}