#include <string.h>
#define N 109
int main()
{
	char str [N] = "Then she usually reads a book or just watches TV.What a big building it is! What is this thing ? I am hungry?";
	char sep1[10] = "!";
	char sep2[10] = "?";
	char sep3[10] = ".";
	char *istr;
	int count1 = 0;
	int count2 = 0;
	int count3 = 0;
	istr = strtok (str,sep1);
	istr = strtok (str,sep2);
	istr = strtok (str,sep3);
	while (istr != NULL)
	{
		if (istr == sep1)
		{
			count1++;
		}
		else if (istr == sep2)
		{
			count2++;
		}
		else if (istr == sep3)
		{
			count3++;
		{
		istr = (NULL,sep1,sep2,sep3);
	}
	return 0;
}

