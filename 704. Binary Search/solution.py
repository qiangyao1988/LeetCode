#!python3


class Solution:
    def search(self, nums: List[int], target: int) -> int:
        left = 0
        right = len(nums)-1
        while left <= right:
            pivot = left + (right - left) // 2
            if nums[pivot] == target:
                return pivot
            if target < nums[pivot]:
                right = pivot - 1
            else:
                left = pivot + 1
        return -1


if __name__ == "__main__":
    nums = [-1, 0, 3, 5, 9, 12]
    target = 9
    assert (Solution().search(nums, target) == 4)
    nums = [-1,0,3,5,9,12]
    target = 2
    assert (Solution().twoSum(nums, target) == -2)
