//Print Keypad Combinations Code 

// Given an integer n, using phone keypad find out and print 
// all the possible strings that can be made using digits of input n.

#include <iostream>
#include <string>
using namespace std;
void reverseStr(string& str) 
{ 
    int n = str.length(); 
  
    // Swap character starting from two 
    // corners 
    for (int i = 0; i < n / 2; i++) 
        swap(str[i], str[n - i - 1]); 
} 


void printkeypad(int num,string output){
	if(num==0){
		reverseStr(output);
		cout<<output<<endl;
		return;
	}
	string input="";
	
	
	
	int k=num%10;
	int size;
	if(k==2){
        input="abc";
        size=3;
    }
    if(k==3){
        input="def";
        size=3;
    }
    if(k==4){
        input="ghi";
        size=3;
    }
    if(k==5){
        input="jkl";
        size=3;
    }
    if(k==6){
        input="mno";
        size=3;
    }
    if(k==7){
        input="pqrs";
        size=4;
    }
    if(k==8){
        input="tuv";
        size=3;
    }
    if(k==9){
        input="wxyz";
        size=4;
    }
	
	for(int i=0;i<size;i++){
		printkeypad(num/10,output+input[i]);
	}
	
}

void printKeypad(int num){
    /*
    Given an integer number print all the possible combinations of the keypad. You do not need to return anything just print them.
    */
    string output="";
    printkeypad(num,output);
}

using namespace std;

int main(){
    int num;
    cin >> num;

    printKeypad(num);

    return 0;
}
