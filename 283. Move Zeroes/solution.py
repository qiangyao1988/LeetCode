class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        nonZeroIndex = 0;
        for zeroIndex in range(len(nums)):
            if(nums[zeroIndex] != 0):
                nums[nonZeroIndex] = nums[zeroIndex]
                nonZeroIndex += 1
            
        for nonZeroIndex in range (nonZeroIndex,len(nums)):
            nums[nonZeroIndex] = 0
