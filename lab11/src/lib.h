#ifndef LAB11_LIB_H
#define LAB11_LIB_H
/**
 * @file lib.h
 * @brief Файл c объявлением функций 
 *
 * @author Vinnik O.
 * @date 21-dec-2020
 * @version 1.0
 */
#include <stdlib.h>
/**
 *Функція яка заповнює 1 та 2 масив віпадковими числами від 0 до 10
 */
void fill_mas(int *mas1,int *mas2,int size1,int size2);

/**
 *Функція яка заповнює результуючий масив
 */
void fill_mas3(int *mas1,int *mas2,int size1,int size2, int *mas3);

/**
 *Функція яка сортурує результуючий масив
 */
void sort_mas3(int size1,int size2, int *mas3);

#endif 
