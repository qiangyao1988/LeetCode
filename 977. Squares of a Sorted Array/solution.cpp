// Brute Force
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0; i< nums.size(); i++){
            nums[i] *= nums[i];
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};


// Two pointers
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int k = nums.size()-1;  
        vector<int> result(nums.size(), 0);
        for(int i=0, j = nums.size()-1; i<=j;){
            if(nums[i]*nums[i] < nums[j]*nums[j]){
                result[k--] = nums[j]*nums[j];
                j--;
            }
            else{
                result[k--] = nums[i]*nums[i];
                i++;
            }
        }
        return result;
      }
};