
/**
 *@file task5.c.
 *@brief Визначити корінь числа.
 *@autor Винник Олександр.
 *@date 21-dec-2020.
 *version 1.0.
*/

/**
 *@param n - число корінь якого треба знайти;
 *@param shag - похибка;
 *@param root - корінь;
*/

#define shag 0.001

/**
 *Функція яка визначає корінь числа;
 */
double rootFunk(double n);

/**
 *Функція main : задає число та передає його в функцію
*/
int main()
{
	double n = 357;
	double root = 0;
	root = rootFunk(n);
	return 0;
}
double rootFunk(double n)
{
	double root = 0;
	while( root * root < n){
		root += shag;
	}
	return root;
}
