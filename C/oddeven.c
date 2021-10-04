#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // True if num is perfectly divisible by 2
    (num%2==0)?printf("No. is even"):printf("No.is odd");
    
    return 0;
}
