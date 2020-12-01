int main()
{	
	int b = 37;
	char type;
	if ( b == 1 ){
                type = 'n';
        }
	while ( (b % 2 == 0) || (b % 3 == 0) || (b % 5 == 0) ){
		type = 'n';
	}
	if ( type != 'n'){
        	type = 'p';
	}
	return 0;
}
