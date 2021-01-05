/**
 * @file lib.c
 * @brief Файл з реалізацією функцій lab11
 *
 * @author Vinnik O.
 * @date 21-dec-2020
 * @version 1.0
 */
#include "lib.h"
void fill_mas(int *mas1,int *mas2,int size1,int size2)
{
	for (int i = 0; i < size1; i++)
 	{
        	*(mas1 + i) = rand() % 10;
    	}
    	for (int i = 0; i < size2; i++)
 	{
        	*(mas2 + i) = rand() % 10;
    	}
}


void fill_mas3(int *mas1,int *mas2,int size1,int size2, int *mas3)
{
	for (int i = 0; i < size1 ; i++)
	{
		*(mas3 + i) = *(mas1 + i);
	}
	for (int i = size1; i < size1 + size2 ; i++)
	{
		for(int j = 0; i < size2 ; j++)
		{
		*(mas3 + i ) = *(mas2 + j); 
		}
	}
}


void sort_mas3(int size1,int size2, int *mas3)
{

    int temp = 0;
    for (int i = 0; i < size1 + size2 - 1; i++)
    {
        for(int j = (size1 + size2 - 1); j < i; j--)
        {
            if (*(mas3 + i) > *(mas3 + j)) 
            {
                temp = *(mas3 + j);
                *(mas3 + j) = *(mas3 + i);
                *(mas3 + i) = temp;
            }
        }
    }
}
