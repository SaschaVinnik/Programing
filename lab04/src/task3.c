int main () 
{
	char equation;
	char tru;
	int m =3;
	int k =6;
	int n =7;
	if ( k < m < n ){
		equation = tru;
	}
	if  ( k > m ){
		m += k;
	}
	if  ( m > n){
		n += m;
	}
	return 0;
}
