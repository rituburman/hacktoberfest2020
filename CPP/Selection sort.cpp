#include<bits/stdc++.h>
using namespace std;
void selection(int arr[],int size){
  for(int i=0;i<size-1;i++){
    int mn=i;
    for(int j=i+1;j<size;j++){
      if(arr[j]<arr[mn]){
        mn=j;
      }
    }
    if(mn!=i){
      swap(arr[mn],arr[i]);
    }
  }
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
int main(){
  int size;
  cin>>size;
  int arr[size];
  for(int i=0;i<n;i++0{
    cin>>arr[i];
  }
  selection(arr,size);
  return 0;
}
