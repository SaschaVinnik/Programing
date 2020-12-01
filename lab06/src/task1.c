int main()
{
	char aggregate = '_';
	char SIZE[15];
	char word[15] = "Ivanov        \0";
	int spase_counter = 0;
	SIZE[15 - 1] = '\0';
	for ( int i = 0; i < 15 - 1 ;i++){
		if ( word[i] == ' ') spase_counter++;
	}
	for ( int i = 0; i < spase_counter / 2 ; i++){
		SIZE[i] = aggregate;
	}
	for (  int i = 0; i < 15 - spase_counter - 1;i++){
		SIZE[i + spase_counter / 2] = word[i];
	}
	for ( int i = 15 - spase_counter / 2 - 1; i < 15 - 1;i++){
		SIZE[i] = aggregate;
	}
	return 0;
}
