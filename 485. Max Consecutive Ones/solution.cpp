// Simple Method
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int sum = 0;
        int max = 0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==1){
                sum +=1;
            }
            else{
                max = (sum>max) ? sum:max;
                sum = 0;
            }
        }
        return (sum>max) ? sum:max;
    }
};
