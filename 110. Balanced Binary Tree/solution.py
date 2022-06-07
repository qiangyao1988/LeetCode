# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        
        is_balanced, _ = self.divideConqure(root)
        
        return is_balanced
    
    def divideConqure(self, root):
        if not root:
            return True, 0
        
        is_left_balanced, left_height = self.divideConqure(root.left)
        is_right_balanced, right_height = self.divideConqure(root.right)
        
        root_height = max(left_height, right_height) + 1
        
        if not is_left_balanced or not is_right_balanced:
            return False, root_height
            
        if abs(left_height - right_height) > 1:
            return False, root_height
            
        return True,root_height
            
        