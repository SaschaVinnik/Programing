#include "list.h"


bool Test_sort()
{
    bool result = true;
    struct List *list = Creating_list();
    add_element_end(list, 1, "Fender", 19, 8, 0, 1);
    add_element_end(list, 0, "Gibson", 20, 12, 1, 0);
    add_element_end(list, 1, "Crafter", 21, 9, 0, 0);

    Sort_by_criterion(list, 1);

    struct List *expected = Creating_list();

    add_element_end(expected, 1, "Crafter", 21, 9, 0, 0);
    add_element_end(expected, 0, "Gibson", 20, 12, 1, 0);
    add_element_end(expected, 1, "Fender", 19, 8, 0, 1);
    if()

}


int main1()
{
    printf("Тест сортировки");
    Test_sort();

}
