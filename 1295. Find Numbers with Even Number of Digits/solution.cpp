// Simplem Solution
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            int len = to_string(nums[i]).length();
            if((len%2)==0) sum +=1; 
        }
        return sum;
    }
};