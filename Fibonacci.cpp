#include<bits/stdc++.h>
using namespace std;
void fibonacci(int n)
{
int a=0,b=1;
cout<<0<<" "<<1<<" ";
for( int i=0;i<n-2;i++)
{
	int c=a+b;
	cout<<c<<" ";
	a=b;
	b=c;
}
}
int main()
{
    cout<<"Enter number of terms of fibonacci series:" <<endl;
	int y;
	cin>>y;
	fibonacci(y);
	cout<<endl;
}
