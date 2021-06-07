

#ifndef RGZ_LIST_H
#define RGZ_LIST_H

#include "guitar.h"


/**
 * @file list.h
 * @brief Файл содержит основной список и списки наследников
 *
 * @author Винник О.С.
 * @date 6-jun-2021
 * @version 1.0
 */


/**
 * Основной клас список
 */
class List
{
    Guitar **guitar;
    size_t Count;
public:
    /**
     * Деструктор по умолчанию
     */
    virtual ~List();

    /**
    * Сеттер счечика
    */
    void setCount(const int count);

    /**
   * Геттер счечика
   */
    size_t getcount() const;

    /**
* Метод добавления
*/
    void addGuitar( Guitar& guitar);
    /**
* Метод удаления по индексу
*/
    void removeGuitar( int index);
    /**
* Метод доступа по индексу
*/
    Guitar& getGuitar (int index) const;
    /**
* Метод печати
*/
    void ShowAll() const;
    /**
* 2 метод колекции
*/
    Guitar& Colektion_Guitar() const;
    /**
*  Метод конвертации строки в объект
*/
    Guitar& convert_string_to_object(const string &object) const;

    /**
  *  Метод чтения из файло
  */
    void ReadFromFile(const string &path) ;
    /**
*  Метод зариси в файл
*/
    void WriteToFile(const string &path);

    /**
*  Перегруженый оператор индексирования
*/
    Guitar& operator[](const size_t index) const;

    /**
* 2 метод колекции
*/
    Guitar& Colektion_Guitar2() const;

    //void Print();

    friend ostream& operator<< (ostream &out, const List &list);
    friend istream& operator>> (istream &in, List &list);

    //friend ofstream& operator<< (ofstream &out, const List &list);
    //friend ifstream& operator>> (ifstream &in, List &list);



};
//         Наследник 1

/**
 * Первый наследник
 */
class ListAcousticGuitar
{
    AcousticGuitar **AcousticGuitars;
    size_t Count;
public:
    /**
    * Конструктор по умолчанию первого наследника
    */
    ListAcousticGuitar();

    /**
    * Конструктор копирования первого наследника
    */
    ListAcousticGuitar(const ListAcousticGuitar &copy);

    /**
     * Деструктор по умолчанию
     */
    virtual ~ListAcousticGuitar();

    /**
   * Сеттер счечика
   */
    void setCount(const int count);

    /**
  * Метод доступа по индексу
  */
    AcousticGuitar& getAcousticGuitar (int index) const;

    /**
  * Метод добавления
  */
    void  addGuitar( AcousticGuitar& guitar);

    /**
* Метод печати
*/
    virtual void ShowAll() const;
    /**
  * 1 метод колекции
  */
    AcousticGuitar& Colektion_Guitar() const;
    /**
* 2 метод колекции
*/
    AcousticGuitar& Colektion_Guitar2() const;


};



//         Наследник 2

/**
 * Второй наследник
 */
class ListElectricGuitar
{
    ElectricGuitar **ElectricGuitars;
    size_t Count;
public:
    /**
   * Конструктор по умолчанию второго наследника
   */
    ListElectricGuitar();
    /**
    * Конструктор копирования второго наследника
    */

    ListElectricGuitar(const ListElectricGuitar &copy);

    /**
     * Деструктор по умолчанию
     */
    virtual ~ListElectricGuitar();

    /**
   * Сеттер счечика
   */
    void setCount(const int count);

    /**
* Метод доступа по индексу
*/
    ElectricGuitar& getElectricGuitar (int index) const;

    /**
* Метод добавления
*/
    void  addGuitar( ElectricGuitar& guitar);

    /**
* Метод печати
*/
    virtual void ShowAll() const;

    /**
* 1 метод колекции
*/
    ElectricGuitar& Colektion_Guitar() const;

    /**
* 2 метод колекции
*/
    ElectricGuitar& Colektion_Guitar2() const;



};



#endif //RGZ_LIST_H
