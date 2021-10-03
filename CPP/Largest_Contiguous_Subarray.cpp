// program to find the largest contiguous subarray;

#include<bits/stdc++.h>
using namespace std;

int main(){

    int number_of_element ;
    cout<<"Enter the element in the list: ";
    cin>>number_of_element;

    int  value_of_element[number_of_element];
    
    cout<<"Enter the value of each element in the list:\n";
    for(int idx=0; idx<number_of_element; idx++){
        cin>>value_of_element[idx];
    }


    // we can use kadane algorithm to find the largest_continguous_subarray;
    
    int ninf=-(1e9+7);
    int answer=ninf;

    int sum=0;
    for(int idx=0; idx<number_of_element; idx++){
        sum+=value_of_element[idx];

        answer=max(answer, sum);
        if(sum<=0) sum=0;

    }
    cout<<"The Largest Contiguous Subarray is: "<<answer<<"\n";
}