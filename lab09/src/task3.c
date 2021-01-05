/**
 *@file task3.c. 
 *@brief Визначити чи є білет щасливим.  
 *
 *@author Винник Олександр.
 *@date 21-dec-2020.
 *version 1.0.
*/

/**
 *@param a - число для перевірки;
 *@param type - змінна яка показує чи є білет щасливим;
*/

/**
 *Функція яка визначає чи є білет щасливим
 */
char LakyB(int a );

/**
 *Функція main : задає число та передає його в функцію
*/
int main()
{
	int a = 104301;
	char type;
	type = LakyB( a );
	return 0;

}
char LakyB(int a )
{
	int sumRight = 0;
	int sumLeft = 0;
	char type;
	while( a / 1000 > 0){
		sumRight += a % 10;
		a /= 10; 
	}
	int b = a;
	while ( b > 0 ){
		sumLeft += b % 10;
		b /= 10;
	}
	if( sumRight == sumLeft ){
		type = 'Y';
	}else{
		type = 'N';
	}
	return type;
}
