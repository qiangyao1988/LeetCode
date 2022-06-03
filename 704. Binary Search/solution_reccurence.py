class Solution:
    def search(self, nums: List[int], target: int) -> int:
        
        if not nums:
            return -1
        if len(nums) == 1:
            if nums[0] == target:
                return 0
            return -1
        start = 0
        end = len(nums) - 1
        return self.find_Position(nums, start, end, target)

    def find_Position(self, nums, start, end, target):
        if start > end:
            return -1

        middle = start + int((end - start) / 2)

        if nums[middle] > target:
            return self.find_Position(nums, start, middle-1, target)

        if nums[middle] < target:
            return self.find_Position(nums, middle+1, end, target)

        return middle