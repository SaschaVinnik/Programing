#include <stdio.h>
#include <stdlib.h>
#define N 4
int FunkShift(int array[N][N]);
int main()
{
	int array[N][N] = {0};
	int result[N][N];
	for (int i = 0; i < N; i ++)
	{
		for (int j = 0; j < N; j ++)
		{
			array[i][j] = rand() % 10;
		}
	}
	FunkShift (array);
	return 0;
}
int FunkShift (int array[N][N])
{
	int result[N][N];
	int reserve = array[0][0];	
	for (int i = 0; i < N * N; i++) 
	{
		result[0][i] = array[0][i + 1];
	}
	result[N - 1][N - 1] = reserve;
}
