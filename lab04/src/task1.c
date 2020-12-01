int main(){
	#define pi 3.14
 	float result;
	char  COMMAND = 'v';
	float r = 3.0;
	if (COMMAND == 'l' ){
		result = 2 * pi *r;
	}
	else if (COMMAND == 's' ){
		result = pi * r *r ;
	}
	else if ( COMMAND == 'v' ){
		result = (4 * pi * r * r * r) / 3;
	}
	return 0;
}			       


	


