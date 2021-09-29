class Solution {
    public static int arrayNesting(int[] nums) {
        int result = 0;
        for (int i = 0; i < nums.length; i++) {
            int j = i, count = 0;
            while (j < nums.length && nums[j] >= 0) {
                int temp = j;
                count++;
                j = nums[j];
                nums[temp] = -1;
            }
            result = Math.max(result, count);
        }
        return result;
    }
}
    return 0;
}
