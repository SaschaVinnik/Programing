int main(){
//Задание номер 5
 #define Value2 327
 int numeral_1;//Еденицы
 int numeral_2;//Десятки
 int numeral_3;//Сотни
 int sravnenie; //Основная задача
 numeral_1 = Value2 % 10;
 numeral_2 = (Value2 % 100 ) / 10;
 numeral_3 = Value2 / 100;
 sravnenie = numeral_1 % numeral_3; 
return 0;
}
