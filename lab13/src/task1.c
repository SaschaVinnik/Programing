#include <string.h>
#define N 109
int main()
{
	char str [N] = "Then she usually reads a book or just watches TV.What a big building it is! What is this thing ? I am hungry?";
	//char sep1[10] = "!";
	//char sep2[10] = "?";
	//char sep3[10] = ".";
	
	char sep[3] = {'!', '.', '?'};
	char *istr;
	int count1 = 0;
	int count2 = 0;
	int count3 = 0;
	istr = strtok (str,sep[0]);
	istr = strtok (str,sep[1]);
	istr = strtok (str,sep[2]);
	while (istr != NULL)
	{
		if (istr == sep[0])
		{
			count1++;
		}
		else if (istr == sep[1])
		{
			count2++;
		}
		else if (istr == sep[2])
		{
			count3++;
		}
		istr = (NULL,sep[0],sep[1],sep[2]);
	}
	return 0;
}

