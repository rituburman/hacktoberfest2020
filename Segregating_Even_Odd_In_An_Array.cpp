// Take Array Elements (Integers), Seperate even and odd numbers

#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "SIZE OF ARRAY : ";
    cin >> size;
    
    int Arr[size];
    
    // Adding ELements to ARRAY
    for (int i = 0; i < size; i++){
        cout << "ELEMENT : ";
        cin >> Arr[i];
    }
    
    // Seperating Even & Odd numbers
    cout << "\nSeperating Even/Odd Numbers" << endl;
    
    for (int j = 0; j < size; j++){
        if (Arr[j] % 2 == 0){
            cout << "Even Number : " << Arr[j] << endl;
        }
        else{
            cout << "Odd Number : " << Arr[j] << endl;
        }
    }
    
    return 0;
}
