

#ifndef RGZ_GUITAR_H
#define RGZ_GUITAR_H
#include <string>
#include <sstream>
#include <cstring>
#include <iostream>
#include <fstream>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::stringstream;
using std::ifstream;
using std::ofstream;
using std::ostream;
using std::istream;
using std::stoi;


/**
 * @file list.h
 * @brief Файл содержит базовый клас и его наследников
 *
 * @author Винник О.С.
 * @date 6-jun-2021
 * @version 1.0
 */

enum Materials
{
    Synthetic,
    Stainless_steel,
    Gold,
    Steel_and_nicole,
    Bronze,
    Copper
};

class Gitar_strings
{
    int min_string_thickness;
    enum Materials materials;
public:
    /**
   * Конструктор по умолчанию
   */
    Gitar_strings ();
    /**
   * Конструктор с параметрами
   */
    Gitar_strings (int  min_string_thickness,enum Materials materials );
    /**
 * Конструктор копирования
 */
    Gitar_strings(const Gitar_strings &copy);
    /**
   * Деструктор по умолчанию
   */
    virtual ~Gitar_strings();

    /**
 * Геттер толшины струны
 */
    int getmin_string_thickness() const;
    /**
 * Геттер материала
 */
    Materials getmaterials()const;

    /**
   * Сеттер минимальной струны
   */
    void setmin_string_thickness(const int min_string_thickness);
    /**
   * Сеттер материала
   */
    void setmaterials(const Materials materials);

    void print();
};

enum Guitar_size
{
    size = 1,
    size2 = 1/2,
    size3 = 1/4,
    size4 = 3/4
};


class Guitar
{
    bool pickup;//звукознимач
    string firm;
    int guitar_tunes;//количество ладов
    Gitar_strings strings;
    Guitar_size guitar_size;
public:
    /**
* Конструктор по умолчанию
*/
    Guitar();
    /**
 * Конструктор с параметрами
 */
    Guitar(int pickup, string firm, int guitar_tunes , const Gitar_strings& strings, enum Guitar_size guitar_size );
    /**
* Конструктор копирования
*/
    Guitar(const Guitar &copy);
    /**
 * Деструктор по умолчанию
 */
    virtual ~Guitar();

    /**
* Геттер звукосчитывателя
*/
    int getpickup() const;
    /**
  * Геттер фирмы
  */
    string getfirm() const;
    /**
 * Геттер количества ладов
 */
    int getguitar_tunes() const;
    /**
  * Геттер струны
  */
    Gitar_strings getstrings() const;
    /**
  * Геттер размера
  */
    Guitar_size getguitar_size() const;

    /**
   * Сеттер звукосчитывателя
   */
    void setpickup(const int pickup);
    /**
   * Сеттер фирмы
   */
    void setfirm(const string firm);
    /**
   * Сеттер количества ладов
   */
    void setguitar_tunes(const int guitar_tunes);
    /**
   * Сеттер струны
   */
    void setstrings(Gitar_strings *strings1);
    /**
   * Сеттер размера
   */
    void setguitar_size(const Guitar_size guitar_size);

    /**
    * Метод печати
    */
    void print();

    /**
     * Метод превращения объекта в строку
     * @return строку
     */
    string toString() const;
    /**
     * Метод превращения строки в объект
     * @param object строка с параметрами
     * @return объект
     */
    Guitar& convert_string_to_object( const string &object) const;

    /**
     * Перегруженый оператор присваивания
     */
    Guitar& operator=(const Guitar& guitar);
};

/**
    * Перегруженый оператор сравнения
    */
bool operator==(const Guitar& A, const Guitar& B);

/**
    * Перегруженый оператор вывода
    */
ostream & operator<<(ostream &out ,const Guitar& guitar);

/**
    * Перегруженый оператор ввода
    */
istream & operator>>(istream &in, Guitar& guitar);


//--------------------Наследник 1


enum Number_of_strings
{
    Six,Seven,Twelve
};

/**
 * Первый наследник
 */
class AcousticGuitar : public Guitar
{
    int distance_between_decks;
    Number_of_strings quantity;
public:
    /**
* Конструктор по умолчанию
*/
    AcousticGuitar();
    /**
* Конструктор с параметрами
*/
    AcousticGuitar(int pickup, string firm, int guitar_tunes , const Gitar_strings& strings, enum Guitar_size guitar_size , int distance_between_decks, enum  Number_of_strings quantity);
    /**
* Конструктор копирования
*/
    AcousticGuitar(AcousticGuitar& copy);
    /**
* Деструктор по умолчанию
*/
    virtual ~AcousticGuitar();

    /**
 * Геттер растояния между деками
 */
    int getdistance_between_decks()const;
    /**
 * Геттер растояния между деками
 */
    Number_of_strings getquantity()const;

    /**
   * Сеттер растояния между деками
   */
    void setdistance_between_decks(const int distance_between_decks);
    /**
   * Сеттер количества струн
   */
    void setquantity(const Number_of_strings quantity);


    /**
    * Метод печати
    */
    void print();


};

//--------------------Наследник 2

enum Coppus_shape
{
    Stratocaster, Super_start, Telecaster, Les_paul
};

/**
 * Второй наследник
 */
class ElectricGuitar : public Guitar
{
    int number_of_regulators;
    Coppus_shape coppus;
public:
    /**
* Конструктор по умолчанию
*/
    ElectricGuitar();
    /**
* Конструктор с параметрами
*/
    ElectricGuitar(int pickup, string firm, int guitar_tunes , const Gitar_strings& strings, enum Guitar_size guitar_size , int number_of_regulators, enum  Coppus_shape coppus);
    /**
* Конструктор копирования
*/
    ElectricGuitar(ElectricGuitar& copy);
    /**
* Деструктор по умолчанию
*/
    virtual ~ElectricGuitar();

    /**
  * Геттер количества регуляторов
  */
    int getnumber_of_regulators()const;
    /**
  * Геттер вида корпуса
  */
    Coppus_shape  getcoppus()const;

    /**
   * Сеттер количества регуляторов
   */
    void setnumber_of_regulators(const int distance_between_decks);
    /**
   * Сеттер вида корпуса
   */
    void setcoppus(const Coppus_shape coppus);


    /**
      * Метод печати
      */
    void print();
};

#endif //RGZ_GUITAR_H
