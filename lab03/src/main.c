int main()
{
 //Задание номер 1
 #define R1 2.5 //1 сопротивление 
 #define R2 5   //2 сопротивление
 #define R3 3.4 //3 сопротивление
 float reverse_R;
 float R;
 R = (1/R1)+(1/R2)+(1/R3);
 reverse_R = 1 / R;
 // Задание номер 2
 #define Value0 258 //Число 
 int first_numeral; // Еденицы
 int second_numeral;//Десятки
 int third_numeral; //Сотни
 int reverse_Value;
 first_numeral = Value0 % 10;
 second_numeral = (Value0 % 100 ) / 10;
 third_numeral = Value0 / 100;
 reverse_Value = first_numeral * 100 + second_numeral * 10 + third_numeral;
 //Задание номер 3
 #define A1 2
 int A2;//2 степень
 int A4;//4 степень
 int A6;//6 степень
 int A8;//8 степень
 int A10;//10 степень
 A2 = A1 * A1;
 A4 = A2 * A2;
 A6 = A2 * A4;
 A8 = A4 * A4;
 A10 = A8 * A2;
 //Задание номер 4
 #define Value1 1984 //Число
 #define system_p 8  //Система исчисления 
 int numeral1;//Еденицы
 int numeral2;//Десятки  
 int numeral3;//Сотни
 int numeral4;//Тысячи
 int variantD;//Число в десятичной системе исчисления
 numeral1 = Value1 % 10 ;
 numeral2 = (Value1 % 100 ) / 10;
 numeral3 = (Value1 % 1000 ) / 100;
 numeral4 = Value1 / 1000;
 variantD = (numeral1 + numeral2 * system_p + numeral3 * system_p * system_p + numeral4 * system_p * system_p * system_p);
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
 //Задание номер 6 
 #define HR 52//Верхняя граница диапазона
 #define LR 50//Нижняя граница диапазона 
 int lr = LR;
 int hr = HR;
 int result;
 int sum;
 result = (lr + hr) / 2 * (hr - lr + 1);
 return 0;
}

