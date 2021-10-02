#include<bits/stdc++.h>
using namespace std;
bool solve(int arr[],int size){
  int maxReach=0;
  for(int i=0;i<size;i++){
    if(maxReach<i){
      return false;
    }
    maxReach=max(maxReach,arr[i]+i);
  }
  return true;
}
int main(){
  int size;
  cin>>size;
  int arr[size];
  for(int i=0;i<size;i++){
    cin>>arr[i];
  }
  bool ans= solve(arr,size);
  cout<<ans<<endl;
  return 0;
}
