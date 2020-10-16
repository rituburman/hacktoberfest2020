/*
Tower of Hanoi is a mathematical puzzle where we have three rods and n disks. The objective of the puzzle is to move the entire stack to another rod, obeying the following simple rules:
1) Only one disk can be moved at a time.
2) Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack i.e. a disk can only be moved if it is the uppermost disk on a stack.
3) No disk may be placed on top of a smaller disk.
*/


#include <iostream>

using namespace std; 
  
void towerOfHanoi(int n, char src, char dest, char aux)  
{  
    if (n == 1)  
    {  
        cout << "Move disk 1 from rod " << src <<" to rod " << dest<<endl;  
        return;  
    }  
    
    towerOfHanoi(n - 1, src, aux, dest);  
    cout << "Move disk " << n << " from rod " << src <<" to rod " << dest << endl;  
    towerOfHanoi(n - 1, aux, dest, src);  
}  
  
int main()  
{  
    int n = 4; 
    towerOfHanoi(n, 'A', 'C', 'B');   
    return 0;  
} 
