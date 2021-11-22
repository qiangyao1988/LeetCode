#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            if (mp.find(target - nums[i]) != mp.end()) {
                ans = { i, mp[target - nums[i]] };
                return ans;
            }
            mp[nums[i]] = i;
        }
        return ans;
    }
};

void print(std::vector <int> const& a) {
    std::cout << "The answer is: ";

    for (int i = 0; i < a.size(); i++)
        std::cout << a.at(i) << ' ';
}

int main()
{
    vector<int> nums;
    int target = 18;

    nums.push_back(2);
    nums.push_back(7);
    nums.push_back(11);
    nums.push_back(15);


    Solution solution;

    print(solution.twoSum(nums, target));
  
    return 0;
}