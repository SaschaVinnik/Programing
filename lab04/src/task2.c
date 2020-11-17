int main()
{
	float a = 123.327;
	float a1 =(int) a;
	int a2 = a * 1000;
	a2 = a2 % 1000; 
	float comparios;
	if ( a1 == 0){
		comparios = 0;
	}
	else{
		comparios = a2 / a1 ;
		comparios = comparios * 100;
		comparios = (int)comparios;
		comparios = (float)comparios;
		comparios = comparios / 100;

	}
	return 0;
}
