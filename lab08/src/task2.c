char is_A_simple(n);
int main()
{
	int numb = 463857;
	char type;
	type = is_A_simple(numb);
	return 0;
}
char  is_A_simple(int numb)
{
	char type;
	if ( numb == 1 ){
		type = 'a';
	}
	else{
		for (int i = 2 ; i <= numb / 2 ; i++){
			if ( numb % i == 0 ){
				type = 'n';
				break;
			}
			else{
                                type = 'p';
			}
		}
	}

	return type;
}
