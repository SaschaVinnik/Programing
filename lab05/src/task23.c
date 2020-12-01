int main()
{
	int b = 40;
	char type;
	if ( b == 1 ){
                type = 'n';
        }
	do{
		type = 'n';
	}while ( (b % 2 == 0) || (b % 3 == 0) || (b % 5 == 0) );
	if ( type != 'n'){
        	type = 'p';
	}
	return 0;
}
