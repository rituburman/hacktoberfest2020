#include<bits/stdc++.h>
#define v 5
using namespace std;

void solution(int path[v])
{
	cout<<"solution exists and the cycle is : ";
	for(int i=0;i<v;i++)
	{
		cout<<path[i]<<" ";
	}
	cout<<path[0]<<endl;
}

bool isSafe(int vi, bool graph[v][v], int path[], int pos)
{
    if (graph [path[pos-1]][vi] == 0)
        return false;
   for (int i = 0; i < pos; i++)
        if (path[i] == vi)
            return false;
    return true;
}

bool hamcycle(bool graph[v][v],int path[v],int pos)
{
	if(pos==v)
	{
		if (graph[ path[pos-1] ][ path[0] ] == 1)
            return true;
        else
            return false;
	}

	for (int vi = 1; vi < v; vi++)
    {
        if (isSafe(vi, graph, path, pos))
        {
            path[pos] = vi;
            if (hamcycle(graph, path, pos+1) == true)
                return true;
            path[pos] = -1;
        }
    }
    return false;
}

bool ham(bool graph[v][v])
{
	int *path=new int[v];
	for(int i=0;i<v;i++)
	{
		path[i]=0;
	}
	path[0]=0;
	if(hamcycle(graph,path,1)==false)
	{
		cout<<"Solution does not exist"<<endl;
		return false;
	}
	solution(path);
	return true;
}


int main()
{
	bool graph[v][v]={{0,1,0,1,0},{1,0,1,1,1},
					{0,1,0,0,1},{1, 1, 0, 0, 1},
                      {0, 1, 1, 1, 0},};
    ham(graph);
    return 0;
}