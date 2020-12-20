// p - простое n - сложное
int main()
{
	#define a 463857
	int i;
	char type;
	if ( a == 1 ){
		type = 'a';
	}
	else{
		for ( i = 2 ; i <= a / 2 ; i++){
			if ( a % i == 0 ){
				type = 'n';
				break;
			}
			else{
                                type = 'p';
			}
		}
	}

	return 0;
}
