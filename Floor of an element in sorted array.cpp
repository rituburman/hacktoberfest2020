#include<bits/stdc++.h>
using namespace std;
int floor(int arr[],int size,int target){
  int ans=-1;
  int low=0;
  int high=size-1;
  while(low<=high){
    int mid=low+(high-low)/2;
    if(arr[i]==arr[mid]){
      return arr[mid];
      }
    else if(arr[i]>mid){
      high=mid-1;
      }
    else{
      ans=arr[mid];
      low=mid+1;
      }
    }
  return ans;
  }
int main(){
  int size;
  cin>>size;
  int arr[size];
  for(int i=0;i<size;i++){
    cin>>arr[i];
    }
  int target;
  cin>>target;
  int ans=floor(arr,size,target);
  cout<<ans<<endl;
  return 0;
  }
