//Stock Buy & Sell
/*Problem :-
We know prices of stocks for upcoming 'n' days. We can buy stock on any day & sell that on any upcoming day.
Find the maximum profit that we can get.

Methods to solve it :-

(1.) Naive Solution -
Rcursive Sol. :
Here We consider evry pair as our valid pair of stock & maximize the profit recursively.

(2.) Efficient Solution -
Here We use an observation to optimize above code.
Idea :- 
If prices of stocks are going down , we let them go down & once the stock reaches at bottom point , then buy stock at that time.
And when prices are going up , we let them go up & we sell the stock when they reach the peak (maxima).
i.e.,
Buy stock at bottom point & sell at top point.
So, Implementation -
We start from 2nd index & if price is going up , We keep adding the profit.
Here ,
Time Complexity = O(n)
*/

//Code for solution-2 (Efficient Solution) :-

#include <iostream>
using namespace std;

int maximumProfit (int price[] , int n)
{
	int profit = 0;
	
		for(int indexOfArray=1 ; indexOfArray<n ; indexOfArray++)
		{
			if( price[indexOfArray] > price[indexOfArray-1] )
			{
				profit += ( price[indexOfArray] - price[indexOfArray-1] ) ;
			}
		}

	return profit;
}

int main()
{
	int numberOfDays;
	int priceOfStock[1000];
	
	cout<<"Enter number of days :- ";
	cin>>numberOfDays;
	
	cout<<"Enter price of stock on :-"<<endl;
	
		for(int index=0 ; index<numberOfDays ; index++)
		{
			cout<<"Day "<<index+1<<" = ";
			cin>>priceOfStock[index];
		}
		
	int profit = maximumProfit ( priceOfStock , numberOfDays ) ;
		
	cout<<"\n"<<"Maximum profit that can be achieved optimally = "<<profit<<" rupees."<<endl;
	
	return 0;
}
