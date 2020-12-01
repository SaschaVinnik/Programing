int main()
{
	int a = 50; 
	int b = 175;
	int nod;
	while ( a != 0 && b != 0 ){	
		if ( a > b ){
			nod = a % b;
		}
		else{
			nod = b % a;
		}
	}
	return 0;
}
