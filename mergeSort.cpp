#include<iostream> 
using namespace std; 
  
void merge(int arr[], int l, int mid, int r) 
{ 
    int n1 = mid - l + 1; 
    int n2 = r - mid; 
  
    int left[n1], right[n2]; 
  
    for(int i = 0; i < n1; i++) 
        left[i] = arr[l + i]; 
    for(int j = 0; j < n2; j++) 
        right[j] = arr[mid + j + 1]; 
 
    int i = 0;  
    int j = 0;  
      
    int k = l; 
      
    while (i < n1 && j < n2) 
    { 
        if (left[i] <= right[j])  
        { 
            arr[k] = left[i]; 
            i++; 
        } 
        else 
        { 
            arr[k] = right[j]; 
            j++; 
        } 
        k++; 
    } 
  
    while (i < n1)  
    { 
        arr[k] = left[i]; 
        i++; 
        k++; 
    } 

    while (j < n2) 
    { 
        arr[k] = right[j]; 
        j++; 
        k++; 
    } 
} 
  
void mergeSort(int arr[], int l, int r) 
{ 
    if (l < r){
        int mid = l + (r - l) / 2; 
  
        mergeSort(arr, l, mid); 
        mergeSort(arr, mid + 1, r); 
        merge(arr, l, mid, r); 
    } 
} 
  
void printArray(int arr[], int n) 
{ 
    for(int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
} 
  
int main() 
{ 
    int n;
    cout <<"Enter the number of elements: ";
    cin >> n;
    
    int *arr = new int[n];
    
    for(int i = 0; i < n; i++)
    cin >> arr[i];
  
    cout << "Given array is \n"; 
    printArray(arr, n); 
  
    mergeSort(arr, 0, n - 1); 
  
    cout << "\nSorted array is \n"; 
    printArray(arr, n); 
    return 0; 
} 
