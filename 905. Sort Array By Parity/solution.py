class Solution:
    def sortArrayByParity(self, nums: List[int]) -> List[int]:
        evenIndex = 0
        oddIndex = len(nums) -1
        
        while(evenIndex<oddIndex):
            if nums[evenIndex]%2 > nums[oddIndex]%2:
                tem =  nums[evenIndex]
                nums[evenIndex] = nums[oddIndex]
                nums[oddIndex] = tem
            
            if nums[evenIndex]%2 == 0:
                evenIndex +=1
            
            if nums[oddIndex]%2 == 1:
                oddIndex -=1
                
        return nums
