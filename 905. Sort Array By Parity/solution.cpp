// two pointer
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int evenIndex = 0;
        int oddIndex = nums.size()-1;
        
        while(evenIndex<oddIndex){
            if(nums[evenIndex]%2 > nums[oddIndex]%2){
                int tem = nums[evenIndex];
                nums[evenIndex] = nums[oddIndex];
                nums[oddIndex] = tem;
            }
            if(nums[evenIndex]%2 == 0) evenIndex++;
            if(nums[oddIndex]%2 == 1) oddIndex--;
        }
        
        return nums;
    }

};