/**
 *@file task1.c. 
 *@brief Визначення НОД алгоритмом Євкліда.
 *
 *@author Винник Олександр.
 *@date 21-dec-2020.
 *version 1.0.
*/

/**
 *@param numb1 - 1 число;
 *@param numb2 - 2 число;
 *@param nod - нод 2 чисел;
*/

/**
 * функція для знаходження нод
*/
int Funk_nod(int a, int b);

/**
 функція main : задає 2 числа і передає їх до функції Funk_nod
*/
int main()
{
  /**
  *1 та 2 число
  */
	int numb1 = 50;   
	int numb2 = 175;
	int nod;
	nod = Funk_nod(numb1,numb2);
	return 0;
}
// опис роботи функції
int Funk_nod(int numb1,int numb2 )
{
	int nod;
	if ( numb1 != 0 && numb2 != 0 )
	{     
                if ( numb1 > numb2 )
		{
                        nod = numb1 % numb2;
                }
                else{
                        nod = numb2 % numb1;
                }
        }
        return nod;

}
