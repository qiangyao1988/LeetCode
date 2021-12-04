// Brute Force
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int result = INT32_MAX;
        int sum=0;
        int subLength = 0;
        for(int i=0; i<nums.size(); i++){
            sum = 0;
            for(int j=i; j<nums.size(); j++){
                sum += nums[j]; 
                if(sum>=target){
                    subLength = j-i+1;
                    result = result < subLength ? result : subLength;
                    break;
                }
            }
        }
        return result == INT32_MAX ? 0:result;
    }
};


// sliding window
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int result = INT32_MAX;
        int sum=0;
        int subLength = 0;
        int i = 0;
        for(int j=0; j<nums.size(); j++){
            sum += nums[j];
            while(sum>=target){
                subLength = (j - i + 1);
                result = result < subLength ? result : subLength;
                sum -= nums[i++];
            }
        }
        return result == INT32_MAX ? 0 : result;
    }
};