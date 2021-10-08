// Best Case:- O(1), worst case:- O(log n), average case:- O(log n)
// Use Cases:- Binary search is preferred for comparatively larger and sorted datasets
//             and will strictly work only for Sorted Arrays

#include<stdio.h>

int main(){
    int i,len,found=0,data,pos,left,right,mid;
    printf("Enter the number of items in the array:");
    scanf("%d", &len);
    int arr[len];
    for(i=0;i<len;i++){
        printf("Enter the element %d:",(i+1));
        scanf("%d", &arr[i]);
    }
    printf("Enter the number you want to search:");
    scanf("%d",&data);
    left=0;
    right=len;
    while(left<=right){
        mid = (left+right)/2;
        if(arr[mid]==data){
            found=1;
            pos=mid;
            break;
        } else if(arr[mid]<data){
            left=mid+1;
        } else if (arr[mid]>data){
            right=mid-1;
        }
    }
    (!found) ? printf("Element Not Found") : printf("Element Present at index position %d",pos);
    return 0;
}