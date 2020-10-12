#include <iostream>
using namespace std;

int multiplyNumbers(int m, int n) {
	if (n == 0)
		return 0;
	int ans = multiplyNumbers(m , n - 1);

	int small_cal = ans + m;
	return small_cal;
}

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int m = 3, n = 5;
	cout << multiplyNumbers(m, n) << endl;
	return 0;
}