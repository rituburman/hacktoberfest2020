#include <iostream>
using namespace std;
 
void pyrpattern(int n)
{
    for (int i = 0; i < n; i++) 
	{
 	  for (int j = 0; j <= i; j++) 
		{
            		cout << "* ";
        	}
          cout << endl;
    	}
}
 

int main()
{
    int n = 7;
    pyrpattern(n);
    return 0;
}