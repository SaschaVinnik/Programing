/**
 *@file task4.c. 
 *@brief Визначити чи є число досконалим.
 *
 *@author Винник Олександр.
 *@date 21-dec-2020.
 *version 1.0.
*/

/**
 *@param a - число для перевірки;
 *@param type - змінна яка показує чи є число досконалим;
*/

/**
 *Функція яка визначає чи є число досконалим
 */
char perfectNumb( int a);

/**
 *Функція main : задає число та передає його в функцію
*/
int main()
{
	int a = 50;
	char type;
	type = perfectNumb( a);
	return 0;
}
char perfectNumb( int a)
{
	int sum;
	char type;
	for (int i = 1; i <= a / 2 ; i++){
		if ( a % i == 0 ){
			sum += i;
		}
	}
	if ( sum == a ){
		type = 'Y';
	}else{
		type = 'N';
	}
	return type; 
}
