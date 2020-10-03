#include<iostream>
using namespace std;
int main() 
{
    int t;
    
    cin>>t;
    
    while(t--)
    {
        
        char array[8][8];
        
        int k;
        
        cin>>k;
        
        array[0][0]='O';
        
        for( int i=0; i<8; i++ )
        {
            for( int j=0; j<8; j++ )
            {
                
                if( i==0 && j==0 )
                continue;
                
                else
                array[i][j]='X';
            }  
               
        }
        
        for( int i=0; i<8 && k>1; i++ )
        {
            for( int j=0; j<8 && k>1; j++ )
            {
                
                if(i==0 && j==0)
                continue;
                
                else
                {
                    
                array[i][j]='.';
                k--;
                
                }
            }
        }  
        
        for( int i=0; i<8; i++ )
        {
            for( int j=0; j<8; j++ )
            {
                
                cout<<array[i][j];
                
            }
            
            cout<<endl;
        }
        
        cout<<endl;
    }
    
	return 0;
}
