
//https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
public class EvenNumberOfDigits {
    public static int findNumbers(int[] nums) {
        int even = 0;
        for (int i = 0; i < nums.length; i++) {
            int count = 0;
            while (nums[i] != 0) {
                count++;
                nums[i] = nums[i] / 10;
            }
            if (count % 2 == 0) {
                even++;
            }

        }
        return even;

    }

    public static void main(String args[]) {
        System.out.print(findNumbers(new int[] { 12, 345, 2, 6, 7896 }));
    }
}
