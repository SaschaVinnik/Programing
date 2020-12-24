/**
 *@file main.c 
 *@brief Визначити чи є число простим 
 *@avtor Винник Олександр
 *@date 21-dec-2020
 *version 1.0
*/

/**
 *@param numb - число для перевірки;
 *@param type - змінна яка показує тип числа;
*/

/**
 *Функція для визначення чи є число простим
 */
char is_A_simple(n);

/**
Функція main : задає число та передає його у функцію is_A_simple
*/
int main()
{
	int numb = 463857;
	char type;
	type = is_A_simple(numb);
	return 0;
}
char  is_A_simple(int numb)
{
	char type;
	if ( numb == 1 ){
		type = 'a';
	}
	else{
		for (int i = 2 ; i <= numb / 2 ; i++){
			if ( numb % i == 0 ){
				type = 'n';
				break;
			}
			else{
                                type = 'p';
			}
		}
	}

	return type;
}
