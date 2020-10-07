//Problem - Trapping Rain Water

/*Problem Statement :-
Given an array of size=n which represents height of 'n' continuous bars. We have to find the maximum amount of water that we can collect in between these bars.

And some observations -
We can't store water at corner bars because then it will flow-out.
We can store water only at the top of middle bars.
And water stored at the top of a bar = minimum of maximum support that it has on its both sides (i.e., left & right) - height of bar

So ,
2 Methods to solve this -

(1.) Naive Method :-
For every bar , go in left of it & find maximum height. Similarly go in right of it & find maximum height.
So water stored at top of that bar = minimum of both heights - heigth of current bar
Here ,
Time - Complexity = O(n^2)

(2.) Efficient Solution :-
Here basic idea is - Rather than computing left-maximum & right-maximum everytime for every 'i' ; here we pre-compute it & store them in arrays.
Then use them whenever required.
Here ,
Time - Complexity = O(n)
Auxiliary - Space = O(n)
*/

//Code for Solution 2 (Efficient SOl.) :-->

#include <bits/stdc++.h>
using namespace std;

int getWater (int heightOfBars[] , int n)			//Ex :- Constraints on n = 1 -> 10000
{
	int result = 0;
	int leftMax[10000],rightMax[10000];
	
	//Pre-Computation :-
	
	leftMax[0] = heightOfBars[0];
	
		for(int arrayIndex=1 ; arrayIndex<n ; arrayIndex++)
			leftMax[arrayIndex] = max ( heightOfBars[arrayIndex] , leftMax[arrayIndex-1] ) ;
			
	rightMax[n-1] = heightOfBars[n-1];
	
		for(int arrayIndex=n-2 ; arrayIndex>=0 ; arrayIndex--)
			rightMax[arrayIndex] = max ( heightOfBars[arrayIndex] , rightMax[arrayIndex+1] ) ;
			
	//Main Logic :-
			
	for(int arrayIndex=1 ; arrayIndex<(n-1) ; arrayIndex++)
		result += ( min ( leftMax[arrayIndex] , rightMax[arrayIndex] ) - heightOfBars[arrayIndex] ) ;
		
	return result;
}

int main()
{
	int numberOfBars , heightOfBars[1000] ;
	
	cout<<"Enter Number of Bars :- ";
	cin>>numberOfBars;
	
	cout<<"Enter size of "<<numberOfBars<<" bars :-"<<endl;
	
		for(int index=0 ; index<numberOfBars ; index++)
			cin>>heightOfBars[index];
			
	int answer = getWater ( heightOfBars , numberOfBars ) ;
	
	cout<<"\nMaximum Water that can be stored is = "<<answer<<" units."<<endl;
	
	return 0;
}
