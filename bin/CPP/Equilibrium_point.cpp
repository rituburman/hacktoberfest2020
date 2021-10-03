#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	for(int tt=0;tt<t;tt++)
	{
	    int n;
	    cin>>n;
	    int x;
	    vector<int> v;
	    for(int i=0;i<n;i++)
	    {
	       cin>>x;
	       v.push_back(x);
	    }
	    if(n==2)
	    cout<<-1<<endl;
	    else{
	    int beg=0,end=n-1,sl=0,sr=0;
	    while(beg<end)
	    {
	        if(sl==sr)
	        {
	            sl+=v[beg];
	            sr+=v[end];
	            beg++;
	            end--;
	            //cout<<"equal";
	        }
	        else if(sl>sr)
	        {
	            sr+=v[end];
	            end--;
	        }
	        else
	        {
	            sl+=v[beg];
	            beg++;
	        }
	    }
	    if(sl==sr)
	    cout<<beg+1<<endl;
	    else
	    cout<<-1<<endl;}
	}
	return 0;
}
