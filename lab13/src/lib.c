/**
 * @file lib.c
 * @brief Файл з реалізацією функцій lab13
 *
 * @author Vinnik O.
 * @date 23-dec-2020
 * @version 1.0
 */
#include "lib.h"
int FunkVOZKL(char * buf, int count1) 
{ 
	char sep = 33; 
	char * istr; 
	istr = strchr(buf, sep); 
	if(istr != NULL) 
	{ 
		count1++;
	 	istr[0] = 32;
	  	istr = strchr(istr, sep);
	 	while(istr != NULL)
	        { 
	    		istr = strchr(istr, sep);
	     		count1++;
	        }
	       	return count1;
	 } 
	 else 
	 { 
	   	return 0;
	 }
} 


int FunkTCK(char * buf, int count2)
{
	 char sep = 46;
	 char * istr;
	 istr = strchr(buf, sep);
	 if(istr != NULL)
	 { 
	 	count2++;
	 	istr[0] = 32;
	 	istr = strchr(istr, sep);
	 	while(istr != NULL) 
	 	{ 
	 		count2++;
	 		istr[0] = 32; 
	 		istr = strchr(istr, sep);
	 	}
	 	return count2;
	 }
	 else
	 { 
	 	return 0;
	 }
}
int FunkVOP(char * buf, int count3)
{
	 char sep = 63;
	 char * istr;
	 istr = strchr(buf, sep);
	 if(istr != NULL)
	 { 
	 	count3++;
	 	istr[0] = 32;
	 	istr = strchr(istr, sep);
	 	while(istr != NULL) 
	 	{ 
	 		count3++;
	 		istr[0] = 32; 
	 		istr = strchr(istr, sep);
	 	}
	 	return count3;
	 }
	 else
	 { 
	 	return 0;
	 }
}

 


	         
