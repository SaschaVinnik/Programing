int main()
{//Задание номер 4
 #define Value1 1984 //Число
 #define system_p 8  //Система исчисления 
 int numeral1;//Еденицы
 int numeral2;//Десятки  
 int numeral3;//Сотни
 int numeral4;//Тысячи
 int variantD;//Число в десятичной системе исчисления
 numeral1 = Value % 10 ;
 numeral2 = (Value % 100 ) / 10;
 numeral3 = (Value % 1000 ) / 100;
 numeral4 = Value / 1000;
 variantD = (numeral1 + numeral2 * system_p + numeral3 * system_p * system_p + numeral4 * system_p * system_p * system_p);
return 0;
}
