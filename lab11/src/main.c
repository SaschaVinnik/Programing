#include <malloc.h>
#include <stdlib.h>
#include <stdio.h>
#include <lib.h>
/**
 *@file main.c. 
 *@brief Скласти масив та упорядкувати його за зростанням .  
 *@autor Винник Олександр.
 *@date 21-dec-2020.
 *version 1.0.
*/

/**
 *@param  mas1 - перший заданий масив;
 *@param  mas2 - другий заданий масив;
 *@param  mas3 - результуючий масив;
 *@param  N - розмір 1-го масиву;
 *@param  M - розмір 2-го масиву;
 */


#define N 5
#define M 3
/**
 *Функція яка заповнює 1 та 2 масив віпадковими числами від 0 до 10
 */
void fill_mas(int *mas1,int *mas2,int size1,int size2);

/**
 *Функція яка заповнює результуючий масив
 */
void fill_mas3(int *mas1,int *mas2,int size1,int size2, int *mas3);

/**
 *Функція яка сортурує результуючий масив
 */
void sort_mas3(int size1,int size2, int *mas3);

/**
 *Функція main : задає розміри масивів та викликає функції
 */
int main ()
{
	//int mas1[N] = {0};
	//int mas2[M] = {0};
	//int mas3[N+M] = {0};
	
	int *mas1 = (int*)malloc(N * sizeof(int));
	int *mas2 = (int*)malloc(M * sizeof(int));
	int *mas3 = (int*)malloc(N+M * sizeof(int));
	
	fill_mas(mas1,mas2,N,M);
	fill_mas3(mas1,mas2,N,M,mas3);
	sort_mas3(N,M, mas3);
	free(mas1);
	free(mas2);
	free(mas3);
	return 0;
}
