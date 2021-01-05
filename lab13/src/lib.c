/**
 * @file lib.c
 * @brief Файл з реалізацією функцій lab13
 *
 * @author Vinnik O.
 * @date 23-dec-2020
 * @version 1.0
 */
#include "lib.h"
int  FunkVOZKL(char * buf, int count1)
{
	char sep[10] = "!";
	char * istr = strtok(buf, "!");
	while (istr != NULL)
	{
		count1 += 1;
		istr = strtok(NULL, "!");
	}
	return count1;	
}

int  FunkTGHK(char * buf, int count2)
{
	char sep[10] = ".";
	char * istr = strtok(buf, sep);
	while (istr != NULL)
	{
		count2 += 1;
		istr = strtok(NULL, sep);
	}
	return count2;		
}

int FunkVOZ(char * buf, int count3)
{
	char sep[10] = "?";
	char * istr = strtok(buf, sep);
	while (istr != NULL)
	{
		count3 += 1;
		istr = strtok(NULL, sep);
	}
	return count3;		
}

