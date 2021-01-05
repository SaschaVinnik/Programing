#include <stdio.h>
#include <stdlib.h>
/**
 *@file task10.c. 
 *@brief Зробити зсув масиву.
 *
 *@author Винник Олександр.
 *@date 21-dec-2020.
 *version 1.0.
*/

/**
 *@param array - масив;
 *@param N - розмір масиву;
*/

#define N 4

/**
 *функція яка виконає зсув масиву
*/
int FunkShift(int array[N][N]);

/**
 *функція main : задає масив та заповнює його випадковими числами , та передає його в функцію FunkShift
*/
int main()
{
	int array[N][N] = {0};
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
	int result[N][N] = {0};
	int reserve = array[0][0];	
	for (int i = 0; i < N * N; i++) 
	{
		result[0][i] = array[0][i + 1];
	}
	result[N - 1][N - 1] = reserve;
	return result;
}
