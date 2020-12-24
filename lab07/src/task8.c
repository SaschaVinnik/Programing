char FunFanf(int number, char result[4][20]);
int main()
{
	int number = 9999;
	char result[4][20];
	result[4][20] = FunFanf(number, result);
	return 0;
}
char FunFanf(int number,char result[4][20])
{
    	char thousands[9][20] = {" one thousand ", " two thousands ", " three thousands0 ", " four thousands ", " five thousands", " six thousands ", " seven thousands ", " eight thousands ", " nine thousands "};
    	char hundreds[9][20] = {" one hundred ", " two hundreds ", " three hundreds ", " four hundreds ", " five hundreds ", " six hundreds ", " seven hundreds ", " eight hundreds ", " nine hundreds "};
    	char between9_20[9][20] = {" ten ", " eleven ", " twelve ", " thirteen ", " fourteen ", " fifteen ", " sixteen ", " seventeen ", " eighteen ", " nineteen "}; 
    	char dozens[9][15] = {" twenty ", " thirty ", " fourty ", " fifty ", " sixty ", " seventy ", " eighty ", " ninety "};
    	char units[9][15] = {" one ", " two ", " three ", " four ", " five ", " six ", " seven ", " eight ", " nine "};
	int Units = number % 10 ;
 	int Dozens = ( number % 100 ) / 10;
 	int Hundreds = ( number % 1000 ) / 100;
 	int Thousands = number / 1000;
	for (int i = 0; i < 20; i++)
	{
		result[0][i] = thousands[Thousands - 1][i];
		result[1][i] = hundreds[Hundreds - 1][i];
		if (Dozens == 1)
		{
			result[2][i] = between9_20[2][i];
		}
		else
		{
			result[2][i] = dozens[Dozens - 2][i];
			result[3][i] = units[Units - 1][i];
		}
	}
	return result;
}
