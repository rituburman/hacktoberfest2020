#include<bits/stdc++.h>
using namespace std;
void rotateLeft(int arr[], int size){ 
   int temp=arr[0];
   for(int i=1,i<size;i++){
      arr[i-1]=arr[i];
   }
   arr[size-1]=temp;
}
int main(){
 int size; 
 cin>>size;
 int arr[size];
 for(int i=0;i<size;i++){
    cin>>arr[i];
 }
 int d; //number of rotations
 cin>>d;
 while(d--){
   rotateLeft(arr,size);
 }
 return 0;
}
