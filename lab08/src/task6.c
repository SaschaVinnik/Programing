#define N 15
char FunkFunk(char word[N],char SIZE[N]);
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
