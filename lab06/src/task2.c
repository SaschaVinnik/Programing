int main()
{
	int qantity = 30;
	int prime_numbers[30];
	int value = 1;
	int j = 0;
	int i;
	char type = ' ';
	while ( j < qantity ){
		if ( value == 2){
			type = 'p';
		}if( value == 1 ){
			type = 'n';
		}if( value == 3 ){
                        type = 'p';
		}
		else{
			for ( i = 2 ; i <=5 ; i++){
				if ( value % i == 0 ){
					type = 'n';
					break;
				}
				else{
                                	type = 'p';
			}
		}
	}
	if ( type == 'n'){
		value++;
	}	
	if ( type == 'p'){
		prime_numbers[j] = value;
		j++;
		value++;
        }
	}
	return 0;
}
