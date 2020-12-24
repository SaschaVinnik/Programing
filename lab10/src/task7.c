#include <stdio.h>
#include <stdlib.h>
/**
 *@file main.c 
 *@brief Записати масив простих чисел
 *@avtor Винник Олександр
 *@date 21-dec-2020
 *version 1.0
*/

/**
 *@param prime_numbers - масив;
 *@param qantity - кількість простих чисел;
 *@param SIZE - розмір масива;
*/
#define SIZE 30
#define qantity  30

/**
 *функція яка запише масив простих чисел
*/
int ProstoyMass(int prime_numbers[SIZE]);

/**
 *функція main: задає масив та передає його в функцію
*/
int main()
{
	int prime_numbers[SIZE];
	ProstoyMass(prime_numbers);
	return 0;
}
int ProstoyMass(int prime_numbers[SIZE])
{ 
	srand(time(NULL));
	int numb = rand() % 1000;
	char type;
	int j = 0;
	while ( j < qantity )
	{
		for ( int i = 0; i < qantity;i++)
        	{
                	if (prime_numbers[i] == numb)
                	{
                        numb = rand() % 1000;   
                	}
        	}

		for ( int i = 2 ; i < numb / 2 ; i++)
		{
			if ( numb % i == 0 )
			{
				type = 'n';
				break;
			}
			else{
                                type = 'p';
			}
		}
	
		if ( type == 'n')
		{
			numb = rand() % 1000;
		}else{
			prime_numbers[j] = numb;
			j++;
			numb = rand() % 1000;

         	} 
	}
	
	return prime_numbers;
}
