#include <string.h>
/**
 *@file main.c. 
 *@brief Скласти масив та упорядкувати його за зростанням .  
 *@autor Винник Олександр.
 *@date 21-dec-2020.
 *version 1.0.
*/

/**
 *@param  count1 - лічильник окличних речень;
 *@param  count2 - лічильник питальних речень;
 *@param  count3 - лічильник розповідних речень;
 *@param  STR - текст для пошуку лексем;
  */
#define STR "Then she usually reads a book or just watches TV . What a big building it is! What is this thing . I am hungry ?"

/**
 *Функція яка рахує окличні речення
 */
int FunkVOZKL(char * buf, int count1);

/**
 *Функція яка рахує питальні речення
 */
int  FunkTGHK(char * buf, int count2);

/**
 *Функція яка рахує розповідні речення
 */
int FunkVOZ(char * buf, int count3);

/**
 *Функція main: задає строку та лічильнтки і передає їх у функцію
 */
int main()
{
	int str_lenght = strlen(STR);
	char * buf = malloc((str_lenght + 1) * sizeof(char));
	strcpy(buf, STR);
	//char sep2[10] = "?";
	//char sep3[10] = ".";
	int count1;
	int count2;
	int count3;
	char sep[3] = "!.?";	
	count1 = FunkVOZKL(buf, count1);
	count2 = FunkTGHK(buf, count2);
	count3 = FunkVOZ(buf, count3);
	return 0;
}
