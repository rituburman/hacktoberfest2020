// // Given an undirected graph G(V,E), check if the graph G is connected graph or not.

// Input Format :
// Line 1: Two Integers V and E (separated by space)
// Next 'E' lines, each have two space-separated integers, 'a' and 'b', denoting that there exists an edge between Vertex 'a' and Vertex 'b'.

// Output Format :
// "true" or "false"

// Sample Input 1:

// 4 4
// 0 1
// 0 3
// 1 2
// 2 3

// Sample Output 1:

// true



#include <iostream>
using namespace std;
int solve(int n,int m,vector<int>u,vector<int>v)
{
	// Write your code here .
    int **edges=new int*[n];
    for(int i=0;i<n;i++)
    {
        edges[i]=new int[n];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            edges[i][j]=0;
        }
    }
    for(int i=0;i<m;i++)
    {
         edges[u[i]-1][v[i]-1]=edges[v[i]-1][u[i]-1]=1;
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(edges[i][j]==1)
            {
                int k=j;
                for(int l=0;l<n;l++)
                {
                    if(l==i)
                    {
                        continue;
                    }
                    if(edges[k][l]==1)
                    {
                        if(edges[i][l]==1)
                        {
                            count++;
                        }
                    }

                }
            }
        }
    }
    return count/6;
}
int main() {

    int n;
	int e;
	cin>>n>>e;
	int **edges=new int*[n];
	for(int i=0;i<n;i++)
	{
		edges[i]=new int [n];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			edges[i][j]=0;
		}
	}
	for(int i=0;i<e;i++)
	{
		int f,s;
		cin>>f>>s;
		edges[f][s]=1;
		edges[s][f]=1;
	}
    if(isconnected(edges,n))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
  return 0;
}