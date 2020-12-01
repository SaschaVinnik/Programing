int main()
{
	int a = 50;
	int i;
	int sum;
	char type;
	for ( i = 1; i <= a / 2 ; i++){
		if ( a % i == 0 ){
			sum += i;
		}
	}
	if ( sum == a ){
		type = 'Y';
	}else{
		type = 'N';
	}
	return 0; 
}
