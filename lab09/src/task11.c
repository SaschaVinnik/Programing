#include <stdlib.h>
/**
 *@file task11.c.
 *@brief Помножити матрицю саму на себе.
 *@autor Винник Олександр.
 *@date 21-dec-2020.
 *version 1.0.
*/

/**
 *@param matrix - мптриця яку треба помножити;
 *@param N - розмір масиву;
 *@param matrix_r - результат множення;
*/

#define N 4

/**
 *функція яка множить матрицю саму на себе
*/

int multiplication(int matrix[N][N]);

/**
 *функція main: яка задає матрицю та передає її в функцію multiplication
*/
int main()
{
	srand(time(NULL));
	int matrix[N][N] ={0};
	int matrix_r[N][N] = {0};
	for (int i = 0; i < N; i ++)
	{
		for (int j = 0; j < N; j ++)
		{
			matrix[i][j] = rand() % 10;
		}
	}
	matrix_r[N][N] = multiplication(matrix);
	return 0;
}
int multiplication(int matrix[N][N])
{
  	int matrix_result[N][N] = {0};
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
	return matrix_result[N][N];
}
