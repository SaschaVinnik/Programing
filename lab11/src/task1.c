#include <malloc.h>
#include <stdlib.h>
#define N 5
#define M 3
void fill_mas(int *mas1,int *mas2,int size1,int size2);
void fill_mas3(int *mas1,int *mas2,int size1,int size2);
void sort_mas3(int size1,int size2, int *mas3);
int main ()
{
	int mas1[N] = {0};
	int mas2[M] = {0};
	int mas3[N+M] = {0};
	fill_mas(mas1,mas2,N,M);
	fill_mas3(mas1,mas2,N,M);
	sort_mas3(N,M, int *mas3);
	return 0;
}
void fill_mas(int *mas1,int *mas2,int size1,int size2)
	for (int i = 0; i < size1; i++)
 	{
        	*(mas1 + i) = rand() % 10;
    	}
    	for (int i = 0; i < size2; i++)
 	{
        	*(mas2 + i) = rand() % 10;
    	}
}
void fill_mas3(int *mas1,int *mas2,int size1,int size2)
{
	for (int i = 0; i < size1 ; i++)
	{
		*(mas3 + i) = *(mas1 + i);
	}
	for (int i = size1; i < size1 + saize2 ; i++)
	{
		for(int j = 0; i < saize2 ; j++)
		{
		*(mas3 + i ) = *(mas2 + j); 
		}
}
void sort_mas3(int size1,int size2, int *mas3)
{

    int temp = 0;
    for (int i = 0; i < size1 + saize2; i++)
    {
        for(int j = 0; j < size1 + saize2; j++)
        {
            if (*(mas3 + i) < *(mas3 + j)) 
            {
                temp = *(mas3 + j);
                *(mas3 + j) = *(mas3 + i);
                *(mas3 + i) = temp;
            }
        }
    }
}

