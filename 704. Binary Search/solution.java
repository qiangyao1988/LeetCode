
class Solution {
    public int search(int[] nums, int target) {
    	int left = 0;
    	int right = nums.length-1;
    	int pivot;
    	while (left<= right) {
    		pivot = left + (right - left) / 2;
    	    if (nums[pivot] == target) return pivot;
            if (target < nums[pivot]) right = pivot - 1;
            else left = pivot + 1;
    	}
        // In case there is no solution, we'll just return -1
        return -1;
    }
}


public class main {
	public static void main(String[] args) {
		Solution solution = new Solution();
		int[] nums;
		nums = new int[6];
		nums[0] = -1;
		nums[1] = 0;
		nums[2] = 3;
		nums[3] = 5;
		nums[4] = 9;
		nums[5] = 15;
		int target = 9;
	    System.out.println("The answer is:");
	    System.out.println(solution.search(nums, target));
	}
}
