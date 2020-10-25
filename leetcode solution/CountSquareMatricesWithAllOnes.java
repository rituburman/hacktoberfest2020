//https://leetcode.com/problems/count-square-submatrices-with-all-ones/
class CountSquareMatricesWithAllOnes {
    public int countSquares(int[][] A) {
        int res = 0;
        for (int i = 0; i < A.length; i++) {
            for (int j = 0; j < A[0].length; j++) {
                if (A[i][j] > 0 && i > 0 && j > 0) {
                    A[i][j] = Math.min(A[i - 1][j - 1], Math.min(A[i - 1][j], A[i][j - 1])) + 1;
                }
                res += A[i][j];
            }
        }
        return res;
    }

    public static void main(String args[]) {
        CountSquareMatricesWithAllOnes obj = new CountSquareMatricesWithAllOnes();
        int[][] A = { { 0, 1, 1, 1 }, { 1, 1, 1, 1 }, { 0, 1, 1, 1 } };
        System.out.println("count : " + obj.countSquares(A));

    }
}