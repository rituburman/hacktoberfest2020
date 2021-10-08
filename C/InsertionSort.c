// Best Case:- O(n), worst case:- O(n^2), average case:- O(n^2)
// Use Cases:- insertion sort is the algorithm of choice either when the data is nearly sorted (because it is adaptive) 
//             or when the problem size is small (because it has low overhead).

#include <stdio.h>

int main(){
    int i,j,len,temp;
    printf("Enter the number of items in the array:");
    scanf("%d", &len);
    int arr[len];
    for(i=0;i<len;i++){
        printf("Enter the element %d:",(i+1));
        scanf("%d", &arr[i]);
    }
    for(i=1;i<len;i++){
        temp = arr[i];
        j=i-1;
        while(j>=0 && temp<=arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    printf("The sorted array:");
    for(i=0;i<len;i++) {
        printf(" %d ",arr[i]);
    }
    return 0;
}