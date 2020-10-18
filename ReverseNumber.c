#include <stdio.h>
int ReversingNumber(int Num)       /*function to reverse the number*/
{
int Reverse_Number = 0;
    
while(Num > 0)                  
{
Reverse_Number = Reverse_Number*10 + Num%10;
    
Num = Num/10;
}
return Reverse_Number;                    /*Returning our reversed number*/
}
int main()
{
int Num;
printf("Enter the number to be reversed:n");
scanf("%d", &Num);
printf("Reverse of no. is %d", ReversingNumber(Num)); 
getchar();
return 0;
}
