
#include "menu.h"


/**
 * @file menu.cpp
 * @brief Содержит реализацтю метода меню
 *
 * @author Винник О.С.
 * @date 6-jun-2021
 * @version 1.0
 */

void Menu::tasks_menu()
{
    List * list = new List;

    Guitar guitar1(true, "Yamaha", 19, Gitar_strings(9, Stainless_steel),size  );
    Guitar guitar2(false, "Cort", 20, Gitar_strings(9, Bronze), size2);
    Guitar guitar3(true, "Jackson", 21, Gitar_strings(11, Copper), size4);

    list->addGuitar(guitar1);
    list->addGuitar(guitar2);
    list->addGuitar(guitar3);
//--------------------------------------------------
    auto * listAcousticGuitar = new ListAcousticGuitar;
    AcousticGuitar acousticGuitar(true, "Yamaha", 22, Gitar_strings(9, Bronze ), size, 65, Seven);
    AcousticGuitar acousticGuitar2(true, "Yamaha", 19, Gitar_strings(11, Gold ), size2, 80, Six);
    AcousticGuitar acousticGuitar3(false, "Yamaha", 26, Gitar_strings(8, Copper ), size4, 10, Twelve);

    listAcousticGuitar->addGuitar(acousticGuitar);
    listAcousticGuitar->addGuitar(acousticGuitar2);
    listAcousticGuitar->addGuitar(acousticGuitar3);
//--------------------------------------------------
    auto * listElectricGuitar = new ListElectricGuitar;
    ElectricGuitar electricGuitar(false, "Yamaha", 26, Gitar_strings(8, Copper ), size4, 1, Super_start);
    ElectricGuitar electricGuitar2(false, "Fender", 27, Gitar_strings(9, Bronze ), size, 2, Les_paul);
    ElectricGuitar electricGuitar3(false, "Cort", 19, Gitar_strings(10, Stainless_steel ), size3, 3, Telecaster);

    listElectricGuitar->addGuitar(electricGuitar);
    listElectricGuitar->addGuitar(electricGuitar2);
    listElectricGuitar->addGuitar(electricGuitar3);

    for (int i =0; i < 100; ++i)
    {

        int index;
        cout << "Menu" << endl;
        cout << "1. Показать список ." << endl;
        cout << "2. Удалить список." << endl;
        cout << "3. Получить элемент по индексу." << endl;
        cout << "4. Добавитьть элемент." << endl;
        cout << "5. 1 метод роботы с колекцией." << endl;
        cout << "6. 2 метод роботы с колекцией." << endl;
        cout << "7. Выход." << endl;
        cin >> index;
        cout << endl;
        cout << endl;

        switch (index)
        {
            case 1: {
                cout << "--------------Основной список --------------" << endl;
                list->ShowAll();
                cout << "--------------Первый наследник--------------" << endl;
                listAcousticGuitar->ShowAll();
                cout << "--------------Второй наследник--------------" << endl;
                listElectricGuitar->ShowAll();
                break;
            }
            case 2: {
                list->setCount(0);
                listAcousticGuitar->setCount(0);
                listElectricGuitar->setCount(0);
                break;
            }
            case 3: {
                int num;
                cin >> num;
                cout << "--------------Основной список --------------" << endl;
                Guitar temp = list->getGuitar(num);
                temp.print();
                cout << "--------------Первый наследник--------------" << endl;
                AcousticGuitar temp1 = listAcousticGuitar->getAcousticGuitar(num);
                temp1.print();
                cout << "--------------Второй наследник--------------" << endl;
                ElectricGuitar temp2 = listElectricGuitar->getElectricGuitar(num);
                temp2.print();
                break;
            }
            case 4: {
                cout << "--------------Основной список --------------" << endl;
                Guitar guitar_in(true, "111111111111111111", 21, Gitar_strings(11, Copper), size4);
                list->addGuitar(guitar_in);
                list->ShowAll();
                cout << "--------------Первый наследник--------------" << endl;
                AcousticGuitar acousticGuitar_in(false, "22222222222222", 26, Gitar_strings(8, Copper), size4, 10,
                                                 Twelve);
                listAcousticGuitar->addGuitar(acousticGuitar_in);
                listAcousticGuitar->ShowAll();
                cout << "--------------Второй наследник--------------" << endl;
                ElectricGuitar electricGuitar_in(false, "3333333333333333333", 19, Gitar_strings(10, Stainless_steel),
                                                 size3, 3, Telecaster);
                listElectricGuitar->addGuitar(electricGuitar_in);
                listElectricGuitar->ShowAll();
                break;
            }
            case 5: {
                cout << "--------------Основной список --------------" << endl;
                list->Colektion_Guitar();
                cout << "--------------Первый наследник--------------" << endl;
                listAcousticGuitar->Colektion_Guitar();
                cout << "--------------Второй наследник--------------" << endl;
                listElectricGuitar->Colektion_Guitar();
                break;
            }
            case 6: {
                cout << "--------------Основной список --------------" << endl;
                list->Colektion_Guitar2();
                cout << "--------------Первый наследник--------------" << endl;
                listAcousticGuitar->Colektion_Guitar2();
                cout << "--------------Второй наследник--------------" << endl;
                listElectricGuitar->Colektion_Guitar2();
                break;
            }
            case 7:{
                return;
            }

        }

    }
}