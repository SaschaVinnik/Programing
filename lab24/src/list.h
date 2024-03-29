
#ifndef LAB23_LIST_H
#define LAB23_LIST_H

#include "guitar.h"



class List
{
    Guitar **guitar;
    size_t Count;
public:
    virtual ~List();
    void setCount(const int count);

    void addGuitar( Guitar& guitar);
    void removeGuitar( int index);
    Guitar& getGuitar (int index) const;
    void ShowAll() const;
    Guitar& Colektion_Guitar() const;
    Guitar& convert_string_to_object(const string &object) const;


    void ReadFromFile(const string &path) ;
    void WriteToFile(const string &path);

    //void Print();
};










#endif //LAB23_LIST_H
