#include<bits/stdc++.h>
using namespace std;
vector<int> solve(int arr[],int size,int target){
  unordered_map<int,int>mp;
  vector<int>v;
  for(int i=0;i<size;i++){
    if(mp.find(target-arr[i])!=mp.end()){
      v.push_back(mp[target-arr[i]]);
      v.push_back(i);
      }
    mp[arr[i]]=i;
    }
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
  vector<int>ans= solve(arr,size,target);
  for(int i=0;i<size;i++){
    cout<<v[i]<<" ";
    }
  cout<<endl;
  return 0;
  }
