/**
 *@file task6.c .
 *@brief Центрувати слово на площині .
 *@autor Винник Олександр .
 *@date 21-dec-2020 .
 *version 1.0.
*/

/**
 *@param N - розмір масиву;
 *@param word - заданий масив;
 *@param SIZE - результуючий масив;
*/

#define N 15

/**
 *функція яка центруе слово на площині
*/
char FunkFunk(char word[N],char SIZE[N]);

/**
 *функція main : задає масив та передвє його значення в функцію FunkFunk
*/
int main()
{
	char word[N] = "Ivanov________\0"; 
	char SIZE[N] = { }; 
	FunkFunk(word,SIZE);
	return 0;
}
char FunkFunk(char word[N],char SIZE[N])
{ 
	char aggregate = '_'; 
	int spase_counter = 0; 
	SIZE[N - 1] = '\0'; 
	for ( int i = 0; i < N - 1 ;i++){
		if ( word[i] == '_') 
			spase_counter++;
	}
	for ( int i = 0; i < spase_counter / 2 ; i++){
		SIZE[i] = aggregate;
	}
	for (  int i = 0; i < N - spase_counter - 1;i++){
		SIZE[i + spase_counter / 2] = word[i];
	}
	for ( int i = N - spase_counter / 2 - 1; i < N - 1;i++){
		SIZE[i] = aggregate;
	}
	return 	SIZE;
}
