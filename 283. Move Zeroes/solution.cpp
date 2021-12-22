// two pointer
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonZeroIndex = 0;
        for(int zeroIndex = 0; zeroIndex<nums.size(); zeroIndex++){
            if(nums[zeroIndex] != 0){
                nums[nonZeroIndex] = nums[zeroIndex];
                nonZeroIndex++;
            }
        }
        for(nonZeroIndex; nonZeroIndex<nums.size(); nonZeroIndex++){
            nums[nonZeroIndex] = 0;
        }
    }
};