// Sort
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> ordered = heights;
        int nums = 0;
        sort(begin(ordered),end(ordered));
        for(int i=0; i< heights.size(); ++i) nums +=  heights[i] != ordered[i];
        return nums;
    }
};
