#include<iostream>
using namespace std; 
int raskras (int j, int l, int a1, int a2, && int A[j][l], int x, int y)																				
{
A[x][y]==a2;
if (A[x+1][y]==a1)
{
raskras (j, l, A[x+1][y], a2, && A, x+1, y );
}
if (A[x][y+1]==a1)
{
raskras (j, l, A[x][y+1], a2, && A, x, y+1 );
}
if (A[x-1][y]==a1)
{
raskras (j, l, A[x-1][y], a2, && A, x-1, y );
}
if (A[x][y-1]==a1)
{
raskras (j, l, A[x][y-1], a2, && A, x, y-1 );
}
return (A);
}
main()
{
int a, b, c, d, e;
cin>>a>>b>>c>>d>>e;
int A[b][a];
for (int i=0; i<b; i++)
{
	for (int i=0; i<a; i++)
	{
		cin>>A[b][a];
	}
}
raskras (b, a, A[c-1][d-1], e, && A, c-1, d-1 );
for (int i=0; i<b; i++)
{
	for (int i=0; i<a; i++)
	{
		cout<<A[b][a];
	}
}
}
