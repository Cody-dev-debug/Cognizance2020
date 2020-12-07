#include <stdio.h>
#include<stdbool.h>
int a;

void printBoard(int board[a][a])
{
    for(int i=0; i<a;i++)
    {
	    for(int j=0;j<a;j++)
	    {
		    printf("%d",board[i][j]);
	    }
	    printf("\n");}
}

bool attacked(int board[a][a], int x, int y)
{
	for(int i=0;i<a;i++)
	{
		if(board[x][i]==1)
		return true;
		if(board[i][y]==1)
		return true;
	}
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<a;j++)
		{
			if(board[i][j] == 1 && i+j==x+y)
			return true;
			if(board[i][j] == 1 && i-j==x-y)
			return true;
		}
	}
	return false;
}

bool queen(int board[a][a],int n)
{
    // printf("Hi%d\n", n);
    // printBoard(board);
	if(n==0)
	return true;
	int col = a - n;
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<a;j++)
		{
			if(attacked(board,i,j)) 
			{
			    continue;
			}
			board[i][j]=1;
			if(queen(board,n-1))
			return true;
			board[i][j] = 0;
 		}
	}
	return false;
}
void main()
{
	printf("Enter the size of board\n");
	scanf("%d",&a);
	int board[a][a];
	for(int i=0;i<a;i++)
	for(int j=0;j<a;j++)
	board[i][j]=0;
	if(queen(board,a))
	{
		printf("YES\n");
		printBoard(board);
	}
	else printf("NO");
}
