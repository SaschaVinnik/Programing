int main()
{
	#define shag 0.01
	double root = 0;
	double n = 357;
	while( root * root < n){
		root += shag;
	}
	return 0;
}
