// 1-щасливый  0-обычный
int main()
{
	int a = 104301;
	int sumRight = 0;
	int sumLeft = 0;
	char type;
	while( a / 1000 > 0){
		sumRight += a % 10;
		a /= 10; 
	}
	int b = a;
	while ( b > 0 ){
		sumLeft += b % 10;
		b /= 10;
	}
	if( sumRight == sumLeft ){
		type = 'Y';
	}else{
		type = 'N';
	}
	return 0;
}
