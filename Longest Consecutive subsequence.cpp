#include<bits/stdc++.h>
using namespace std;

int main()
 {
	//code
	
	int t; cin>>t;
	
	while(t--){
	    int n; cin>>n;
	    int array[n];
	    
	    map<int, int> m;
	    
	    for(int i = 0; i<n;i++){
	        cin>>array[i];
	        m[array[i]] = 1;
	    }
	    
	    int max = 1; int k  = 1; vector<int> v;
	   
	    for(auto x : m){
	        v.push_back(x.first);     
	    }
	    
	    for(int i  =0;i<v.size()-1;i++){
	        if(v[i+1] == v[i]+1){
	            k++;
	        }
	        else{
	            if(k>max) max = k;
	            k =1;
 	        }
 	        
	    }
	    
	    if(k>max) max = k;
	    
	    cout<<max<<endl;
	}
	return 0;
}