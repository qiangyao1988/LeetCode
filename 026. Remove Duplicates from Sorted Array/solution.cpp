// Two pointers
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        int slowIndex = 0;
        for (int fastIndex=1; fastIndex<nums.size(); fastIndex++){
            if (nums[slowIndex] != nums[fastIndex]){
                slowIndex++;
                nums[slowIndex] = nums[fastIndex];
            }  
        }
        return slowIndex+1;
    }
};