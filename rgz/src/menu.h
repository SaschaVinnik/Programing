

#ifndef RGZ_MENU_H
#define RGZ_MENU_H
/**
 * @file menu.h
 * @brief Файл содержит клас меню и его методы
 *
 * @author Винник О.С.
 * @date 6-jun-2021
 * @version 1.0
 */



#include "list.h"

/**
 * Клас-меню
 */

class Menu {
private:

public:
    /**
    * Конструктор по умолчанию
    */
    Menu() = default;

    /**
    * Деструктор по умолчанию
    */
    ~Menu() = default;

    /**
     * Метод который использует меню
     *
     * Выводит на экран варианты действий
     */
    void tasks_menu();
};


#endif //RGZ_MENU_H
