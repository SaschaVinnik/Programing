//
// Created by sascha on 13.03.2021.
//
#include "lib.h"
void fill_mas1(int size1, int* mas1)
{
    for (int i = 0; i < size1; i++)
    {
        printf("Vvedite %d element masiva\n", i);
        *(mas1+i) = getc(stdin);
        while (getc(stdin) != '\n');
    }
}


void fill_mas2(int size2, int* mas2)
{
    for (int i = 0; i < size2; i++)
    {
        printf("Vvedite %d element masiva\n", i);
        *(mas2+i) = getc(stdin);
        while (getc(stdin) != '\n');
    }
}
void fill_mas3(int size3, int size1, int size2, int* mas1, int* mas2, int* mas3)
{
    for (int i = 0; i < size1; i++)
    {
        mas3[i] = mas1[i];
    }
    int j = 0;
    for (int i = size1; i < (size1 + size2); i++)
    {
        mas3[i] = mas2[j];
        j++;
    }

}

void sort_mas3(int size3,int* mas3)
{
    int temp;
    for (int i = (size3- 1);i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (mas3[j] > mas3[j+1])
            {
                temp = mas3[j];
                mas3[j] = mas3[j+1];
                mas3[j+1] = temp;
            }
        }
    }
}

void print_mas3(int* mas3, int size3)
{
    for (int i = 0; i < size3; i++)
    {
        putc(mas3[i], stdout);
        printf("\n");

    }
}
