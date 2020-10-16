#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool wayToSort(int i,int j){return i>j;}

int main(){
	vector<int> intVec;
	intVec.push_back(56);
	intVec.push_back(32);
	intVec.push_back(-43);
	intVec.push_back(23);
	intVec.push_back(12);
	intVec.push_back(93);
	intVec.push_back(132);
	intVec.push_back(-154);
	//Do not include the () when you call wayToSort
	//It must be passed as a function pointer or function object
	
	sort(intVec.begin(),intVec.end(),wayToSort);
	for(vector<int>::size_type i=0;i!=intVec.size();i++)
	cout<<intVec[i]<<" ";
	cout<<endl;
	return 0;
}
