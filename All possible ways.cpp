All possible ways
Send Feedback
Given two integers a and b. You need to find and return the count of possible ways in which we can represent the number a as the sum of unique integers raise to the power b.
For eg. if a = 10 and b = 2, only way to represent 10 as -
10 = 1^2 + 3^2 
Hence, answer is 1.
Note : x^y represents x raise to the power y
Inout Format :
Two integers a and b (separated by space)
Output Format :
Count
Constraints :
1 <= a <= 10^5
1 <= b <= 50
Sample Input 1 :
10 2
Sample Output 1 :
1
Sample Input 2 :
100 2
Sample Output 2 :
3







				PRACTICE

int allWays(int x, int n) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    
}
				SOLUTION















#include<bits/stdc++.h>

int vectorSum(int *arr, int size, int sum) {
    /* How many ways can elements of array arr add to sum. */
    if(size<=0) return 0;
    if(size==1) {
        if(arr[0]==sum) return 1;
        return 0;
    }
    int ans=0;
    // Can the last element of array be included
    if(arr[size-1]==sum) return 1+vectorSum(arr, size-1, sum);
    if(arr[size-1]<sum) return vectorSum(arr, size-1, sum-arr[size-1])+
        vectorSum(arr, size-1, sum);
    return vectorSum(arr, size-1, sum);
}


int allWays(int x, int n) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    vector<int> p;
    // p[i] represents i^n
    p.push_back(1);
    for (int i=2, j=pow(i,n);j<=x;j=pow(++i,n))
        p.push_back(j);
    return vectorSum(&p[0], p.size(), x); 
}

#include <iostream>
using namespace std;
#include "Solution.h"

int main()
{
    int x, n;
    cin >> x >> n;
    cout << allWays(x, n);
    return 0;
}

