int main()
{
// Задание номер 2
 #define Value0 258 //Число 
 int first_numeral; // Еденицы
 int second_numeral;//Десятки
 int third_numeral; //Сотни
 int reverse_Value;
 first_numeral = Value % 10;
 second_numeral = (Value % 100 ) / 10;
 third_numeral = Value / 100;
 reverse_Value = first_numeral * 100 + second_numeral * 10 + third_numeral;
 return 0;
}
