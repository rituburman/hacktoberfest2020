#include<iostream>
#include<algorithm>
using namespace std;

const int SIZE = 7;

int main(){
	int intArray[SIZE] = {5,3,32,-1,1,104,53};
	sort(intArray,intArray + SIZE);
	
	cout<<"Sorted Array looks like this."<<endl;
	for(size_t i=0;i!=SIZE;i++)
	cout<<intArray[i]<<" ";
	
	return 0;
}
