public class longestHappyString {
    public String longestDiverseString(int a, int b, int c) {
        StringBuilder sb = new StringBuilder();
        int size = a + b + c;
        int A = 0, B = 0, C = 0;
        for (int i = 0; i < size; i++) {
            if ((a >= b && a >= c && A != 2) || (a > 0 && B == 2) || (a > 0 && C == 2)) {
                sb.append("a");
                a--;
                A++;
                B = 0;
                C = 0;
            } else if ((b >= a && b >= c && B != 2) || (b > 0 && A == 2) || (b > 0 && C == 2)) {
                sb.append("b");
                b--;
                B++;
                A = 0;
                C = 0;
            } else if ((c >= a && c >= b && C != 2) || (c > 0 && B == 2) || (c > 0 && A == 2)) {
                sb.append("c");
                c--;
                C++;
                A = 0;
                B = 0;
            }
        }
        return sb.toString();
    }

    public static void main(String args[]) {
        longestHappyString obj = new longestHappyString();
        System.out.println(obj.longestDiverseString(5, 3, 2));
    }
}
