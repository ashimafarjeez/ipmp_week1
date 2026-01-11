//Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
//There is only one repeated number in nums, return this repeated number. Solve without modifying the array.

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            int ind = abs(nums[i])-1;
            nums[ind]=-nums[ind];
            if(nums[ind]>0) return ind+1;
        }
        return -1;
    }
};

//TC: O(N), SC: O(1)
