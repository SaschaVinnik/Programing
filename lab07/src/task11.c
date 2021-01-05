#include <stdlib.h>
#define N 4
void multiplication(int matrix[N][N]);
int main()
{
	srand(time(NULL));
	int matrix[N][N] ={0};
	int matrix_result[N][N];
	for (int i = 0; i < N; i ++)
	{
		for (int j = 0; j < N; j ++)
		{
			matrix[i][j] = rand() % 10;
		}
	}
	multiplication(matrix);
	return 0;
}
void multiplication(int matrix[N][N])
{
  	int matrix_result[N][N];
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			for(int k = 0; k < N; k++)
			{
				matrix_result[i][j] += matrix[i][k]*matrix[k][j];
			}
		}
	}
}
