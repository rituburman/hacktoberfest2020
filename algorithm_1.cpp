#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main()
{
	vector<int> v;
	for(int i=0;i<10;i++)
	v.push_back(i);
	int x1=5,x2=10;
	vector<int>::iterator it;
	it = find(v.begin(),v.end(),x1);
	if(it!=v.end()){
		cout<<"Found  "<<x1<<endl;
	}
	else
	{
		cout<<"Could not find...  "<<x1<<endl;
	}
	it = find(v.begin(),v.end(),x2);
	if(it!=v.end()){
		cout<<"Found  "<<x2<<endl;
	}
	else
	{
		cout<<"Could not find...  "<<x2<<endl;
	}
}
