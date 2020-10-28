#include <bits/stdc++.h>
using namespace std;



int main() 
{
	int t;
	cin >> t;
	
	int a[100001];
	a[1] = 2;
	a[2] = 3;
	a[3] = 1;
	for(int i = 4;i<100001;i++)
	{
	       a[i] = i;
	}
	
	int temp;
	for(int i = 4;i<=100000;i++)
	{
	       int logn = log2(i);
	       if(pow(2,logn) == i)
	       {
	             
	              temp = a[i];
	              a[i] = a[i+1];
	              a[i+1] = temp;
	       }
	}
	
	
	
	while(t--)
	{
	       int n;
	       cin >> n;
	       
	      int logan = log2(n);
	     // cout <<"logan = " <<logan<<endl;
	      if(n==1)
	      {
	             cout << 1<<endl;
	             continue;
	      }
	      if(pow(2,logan)==n && n!=1)
	      {
	             cout << -1<<endl;
	      }else
	      {
	             for(int i = 1;i<=n;i++)
	             {
	                    cout << a[i]<<" ";
	             }
	              cout << endl;
	      }
	      
	     
	      
	}
}
