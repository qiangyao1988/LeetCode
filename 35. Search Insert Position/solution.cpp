// Brute Force
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for (int i=0; i<nums.size();){
            if(nums[i]<target) i++;
            else if(nums[i]==target) return i;
            else return i;
        }
        return nums.size();
    }
};


// Binary Search
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int pivot, left = 0, right = nums.size()-1;
        
        while(left<=right){
            pivot = left + (right-left)/2;
            if(nums[pivot]==target) return pivot;
            if(target<nums[pivot]) right = pivot-1;
            else left = pivot+1;
        }
        
        return left;
    }
};
