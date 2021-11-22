import java.util.HashMap;
import java.util.Scanner;
import java.util.Map;
import java.util.Arrays;

class Solution {
    public int[] twoSum(int[] nums, int target) {
        for (int i = 0; i < nums.length; i++) {
            for (int j = i + 1; j < nums.length; j++) {
                if (nums[j] == target - nums[i]) {
                    return new int[] { i, j };
                }
            }
        }
        // In case there is no solution, we'll just return null
        return null;
    }
}


public class main {
	public static void main(String[] args) {
		Solution solution = new Solution();
		int[] nums;
		nums = new int[4];
		nums[0] = 2;
		nums[1] = 7;
		nums[2] = 11;
		nums[3] = 15;
		int target = 9;
	    System.out.println("The answer is:");
	    System.out.println(Arrays.toString(solution.twoSum(nums, target)));
	}
}
