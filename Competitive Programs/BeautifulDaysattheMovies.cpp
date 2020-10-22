#include <iostream>
using namespace std;

int beautifulDays(int i, int j, int k) {
    int num,count=0,gn;
    int quo, newNum = 0, x = 0;
    for (int x = i; x <= j ; x++)
    {
        num = x;
        newNum = 0;
        //For reversing no
        while (num != 0)
        {
            quo = num % 10;
            newNum = 10 * newNum + quo;
            num = num / 10;
        }
        gn = abs(x- newNum);
        if (gn%k==0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int i,j,k;
    cin >> i >> j >> k;
    int count = beautifulDays(i,j,k);
    cout << count;
}
