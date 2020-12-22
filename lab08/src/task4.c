char perfectNumb( int a);
int main()
{
	int a = 50;
	char type;
	type = perfectNumb( a);
	return 0;
}
char perfectNumb( int a)
{
	int sum;
	char type;
	for (int i = 1; i <= a / 2 ; i++){
		if ( a % i == 0 ){
			sum += i;
		}
	}
	if ( sum == a ){
		type = 'Y';
	}else{
		type = 'N';
	}
	return type; 
}
