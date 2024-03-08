#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int left = 0;
        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] != val)
                nums[left++] = nums[right];
        }
        return left;
    }
};

int main(){
    vector<int>nums(4);
    nums={3,2,2,3};
    int val=3;
    Solution s;
    cout<<s.removeElement(nums,val);
}