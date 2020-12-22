#define shag 0.001
double rootFunk(double n);
int main()
{
	double n = 357;
	double root = 0;
	root = rootFunk(n);
	return 0;
}
double rootFunk(double n)
{
	double root = 0;
	while( root * root < n){
		root += shag;
	}
	return root;
}
