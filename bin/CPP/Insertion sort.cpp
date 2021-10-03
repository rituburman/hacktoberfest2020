#include<bits/stdc++.h>
using namespace std;
void insertion(int arr[],int size){
  for(int i=1;i<size;i++){
    int temp=arr[i];
    int j=i-1;
    while(j>=0 && arr[j]>temp){
      arr[j+1]=arr[j];
      j--;
    }
    arr[j+1]=temp;
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
  for(int i=0;i<size;i++){
    cin>>arr[i];
  }
  insertion(arr,size);
  return 0;

}
