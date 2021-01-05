#ifndef LAB13_LIB_H
#define LAB13_LIB_H
/**
 * @file lib.h
 * @brief Файл c объявлением функций 
 *
 * @author Vinnik O.
 * @date 21-dec-2020
 * @version 1.0
 */
#include <stdlib.h>
#include <string.h>

/**
 *Функція яка рахує окличні речення
 */
int FunkVOZKL(char * buf, int count1); 

/**
 *Функція яка рахує розповідні речення
 */
int FunkTCK(char * buf, int count2);

/**
 *Функція яка рахує питальні речення
 */
int FunkVOP(char * buf, int count2);
#endif
