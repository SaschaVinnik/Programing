/**
 *@file main.c 
 *@brief Порахувати слова в тексті
 *@avtor Винник Олександр
 *@date 21-dec-2020
 *version 1.0
*/

/**
 *@param word_count - лічильник слів;
 *@param text - масів де буде записано текст;
*/

/**
 *функція яка порахує слова
*/
int FunkWord(char text[21]);

/**
 *функція main : задає масив та передає його в функцію FunkWord
*/
int main()
{
	char text[21] = {' ', 'd', 'd', 'h', 'd', 't', ' ', ' ', 'v', 'j', 'g', 'v', 'j', 'h', ' ', ' ', 'g', ' ', 'n', 'f', 'v'};
	int word_count;
	word_count = FunkWord( text);
	return 0;
}
int FunkWord(char text[21])
{
	char buff[50];
	int j = 0;
	int word_count = 0;
	buff[0] = '0';
	for ( int i = 0 ; i < 50 ; i++){
		buff[i] = '0';	
	}
	for ( int i = 0 ; i < 21 ; i++){
		if ( text[i] != ' '){//если елемент не равен пробелу 
			buff[j] = text[i];
			j++;
		}
		else if ( buff[0] != '0'){
			word_count++;
			j = 0;
			buff[0] = '0';
		}	 
	}
	if (buff[0] != '0'){
		word_count++;
	}
	return word_count;
}
