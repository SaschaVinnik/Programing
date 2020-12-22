char FunFanf(int number, char result[4][20]);
int main()
{
	int number = 5759;
	char result[4][20];
	result[4][20] = FunFanf(number, result);
	return 0;
}
char FunFanf(int number,char result[4][20])
{
    	char thousands[9][20] = {" one thousand ", " two thousands ", " three thousands ", " four thousands ", " five thousands", " six thousands ", " seven thousands ", " eight thousands ", " nine thousands "};
    	char hundreds[9][20] = {" one hundred ", " two hundreds ", " three hundreds ", " four hundreds ", " five hundreds ", " six hundreds ", " seven hundreds ", " eight hundreds ", " nine hundreds "};
    	char between9_20[9][20] = {" ten ", " eleven ", " twelve ", " thirteen ", " fourteen ", " fifteen ", " sixteen ", " seventeen ", " eighteen ", " nineteen "}; 
    	char dozens[9][15] = {" twenty ", " thirty ", " fourty ", " fifty ", " sixty ", " seventy ", " eighty ", " ninety "};
    	char units[9][15] = {" one ", " two ", " three ", " four ", " five ", " six ", " seven ", " eight ", " nine "};
	int Units = number % 10 ;
 	int Dozens = ( number % 100 ) / 10;
 	int Hundreds = ( number % 1000 ) / 100;
 	int Thousands = number / 1000;
	for ( int i = 0; i < 9; i++)
	{
		if ( i == Thousands )
		{
			for ( int j = 0; j < 20; j++)
			{
				result[0][j] = thousands[i - 1][j];
			}
		}
	}
	for ( int i = 0; i < 9; i++)
	{
                if ( i == Hundreds)
		{
                         for ( int j = 0; j < 20; j++)
                        {
                                result[1][j] = hundreds[i - 1][j];
                        }

                }
        }
	for ( int i = 2; i < 10; i++)
	{
		for ( int j = 0; j < 10; j++)
		{
			if ( i == Dozens)
			{
		         	for ( int k = 0; k < 20; k++)
                        	{
                                	result[2][k] = dozens[i - 1][k];
                        	}

 			}
			if ( j == Units)
			{
                                for ( int m = 0; m < 20; m++)
                                {
                                        result[3][m] = units[j - 1][m];
                                }

			}
		}
	}
	if ( Dozens == 1)
	{
		for ( int i = 0; i < 10; i++)
		{
			if ( i == Units)
			{
				for ( int j = 0; j < 20; j++)
                                {
                                        result[3][j] = between9_20[i - 1][j];
                                }

			}
		}
	}
	return result;
}
