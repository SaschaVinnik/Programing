#include <stdarg.h> //заголовочный файл для исрользования вариативной функции
/**
 *@file task12.c .
 *@brief Визначити скільки пар чисел де 1 число більше наступного.
 *
 *@author Винник Олександр.
 *@date 21-dec-2020.
 *version 1.0.
*/

/**
 *@param result - кількість пар;
 *@param SIZE - розмір;
*/
#define SIZE 11

/**
 *функція яка визначає кількість пар чисел де 1 число більше наступного
*/
int Funk(int numbers,...);

/**
 *функція main : задає кількість чисел які будуть передані до функції Funk
*/
int main()
{
	int result;
	result = Funk(SIZE,4,5,3,8,7,4,3,9,2,6,3);		
	return 0;
}
int Funk(int numbers,...)
{
	int result =  0;
	va_list value;//обЪеккт тип va_list 
	va_start(value,numbers);// принимает va_list и ссылкку на последний параметр функции . инициализирует для va_arg
	int variable1;
        variable1 = va_arg(value,int);// принимает va_list и декстор типа 
	for ( int i = 0; i < SIZE; i++)
	{
		int variable2;
        	variable2 = va_arg(value,int);
		if (variable1 < variable2)
	 	{
			result += 1;
		}
		variable1 = variable2;
	}
	va_end (value);// очищает va_list
	return result;
}
