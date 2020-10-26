#include<bits/stdc++.h>
#define MIN(a,b) (((a)<(b))?a:b)
using namespace std;
int main(){
	float i,j;
	cout<<"HI";
	i=100.1;
	j=100.01;
	cout<<MIN(i,j)<<endl;
	return 0;
} 

// int main(){
//     int n;cin>>n;
//     int ar[10000]={1};
//     int carry=0,end=0;
//     for(int i=2;i<=n;i++){
//         for(int j=0;j<=end;j++){
//             int mul=ar[j]*i+carry;
//             ar[j]=mul%10;
//             carry=mul/10;
//         }
//         while(carry!=0){
//             ar[++end]=carry%10;
//             carry/=10;
//         }
//     }
//     for(int i=end;i>=0;i--)
//         cout<<ar[i];
// }
// Trailing Zeroes In Factorial
// C++ program to count 
// trailing 0s in n! 

// Function to return trailing 
// 0s in factorial of n 
/**int findTrailingZeros(int n) 
{ 
	// Initialize result 
	int count = 0; 

	// Keep dividing n by powers of 
	// 5 and update count 
	for (int i = 5; n / i >= 1; i *= 5) 
		count += n / i; 

	return count; 
} 

// Driver Code 
int main() 
{ 
	int n = 100; 
	cout << "Count of trailing 0s in " << 100 
		<< "! is " << findTrailingZeros(n); 
	return 0; 
} 
*/