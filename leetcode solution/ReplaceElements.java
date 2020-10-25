public class ReplaceElements {
    public static int[] replaceElements(int[] arr) {
        int n = arr.length;
        int temp = arr[n - 1];
        int num = arr[n - 1];
        arr[n - 1] = -1;
        if (n == 1) {
            return arr;
        }

        for (int i = n - 1; i > 0; i--) {
            if (temp > arr[i - 1]) {
                arr[i - 1] = temp;
            } else {
                num = temp;
                temp = arr[i - 1];
                arr[i - 1] = num;
            }
        }
        return arr;
    }

    public static void main(String args[]) {
        int a[] = replaceElements(new int[] { 17, 18, 5, 4, 6, 1 });
        for (int i = 0; i < a.length; i++) {
            System.out.println(a[i]);
        }
    }
}
