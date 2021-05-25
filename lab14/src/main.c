#include "lib.h"

int main()
{
    printf("Структура каталога\n");
    struct_folder("/home/sascha/Programing/lab19", 1);
    print_size_of_directory();
    printf("Работа с файлом\n");

    lab12();


    return 0;
}