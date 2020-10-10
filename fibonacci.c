#include <stdio.h>
#include <string.h>
 
int fibsearch(int a[], int n, long x)
{ 
    int inf = 0, pos, k;
    static int kk= -1, nn = -1;
    static int fib[]={0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 98,
    1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811,
    514229, 832040, 1346269, 2178309, 3524578, 5702887, 9227465, 14930352, 24157817,
    39088169, 63245986, 102334155, 165580141};
    if (nn != n)
    { 
        k = 0;
        while (fib[k] < n)
            k++;
        kk = k;
        nn = n;
    }
    else
        k = kk;
    while (k > 0)
    {
        pos = inf + fib[--k];
        if ((pos >= n) || (x < a[pos]));
        else if (x > a[pos])
        {
            inf = pos + 1;
            k--;
        }
        else {
            return pos;
        }
    }
    return -1;
}
main()
{
    int arr[] = {2, 3 , 45, 56 ,67 ,78 , 89, 99, 100, 101};
    int num, pos;
    printf("\nEnter an element to search: ");
    scanf("%d", &num);
    pos = fibsearch(arr, 10, num);
    if ( pos >= 0)
        printf("\nElement is at index : %d", fibsearch(arr, 10, num));
    else
        printf("\nElement NOT found!! ");
 
}