# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def constructMaximumBinaryTree(self, nums: List[int]) -> Optional[TreeNode]:
        # Write your code here
        return self.buid_tree(nums, 0, len(nums)-1)

    def buid_tree(self,nums,start,end):
        if start>end:
            return None
        
        position = start 

        for i in range(start+1,end+1):
            if nums[i]>nums[position]:
                position = i

        root = TreeNode(nums[position])
        root.left = self.buid_tree(nums, start, position - 1)
        root.right = self.buid_tree(nums, position + 1, end)

        return root