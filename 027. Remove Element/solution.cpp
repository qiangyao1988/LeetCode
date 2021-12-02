// Brute force
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size();
        for(int i =0; i<size; i++){
            if(nums[i]==val){
                for(int j=i+1;j<size; j++){
                    nums[j-1] = nums[j];
                }
                i--;
                size--;
            }
        }
        return size;
    }
};

// two pointer
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int slowIndex = 0;
        for(int fastIndex =0; fastIndex < nums.size(); fastIndex++){
            if(nums[fastIndex] != val){
                nums[slowIndex++] = nums[fastIndex];
            }
        }
        return slowIndex;
    }
};