#include <stdio.h>
#include <stdlib.h>
#define SIZE 30
#define qantity  30
int ProstoyMass(int prime_numbers[SIZE]);
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
