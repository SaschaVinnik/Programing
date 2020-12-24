#include <string.h>
#define N 109
void FunkNul(char *istr,char *serp,int *count1,int *count2,int *count3);
int main()
{
	char str [N] = "Then she usually reads a book or just watches TV.What a big building it is! What is this thing ? I am hungry?";
	//char sep1[10] = "!";
	//char sep2[10] = "?";
	//char sep3[10] = ".";
	int count1 = 0;
	int count2 = 0;
	int count3 = 0;
	char sep[3] = {'!', '.', '?'};
	FunkNul(str,sep,count1,count2,count3);
	return 0;
}
void FunkNul(char *istr,char *serp,int *count1,int *count2,int *count3)
{
	
	istr = strtok (istr,serp[0]);
	istr = strtok (istr,serp[1]);
	istr = strtok (istr,serp[2]);
	while (istr != NULL)
	{
		if (istr == serp[0])
		{
			count1++;
		}
		else if (istr == serp[1])
		{
			count2++;
		}
		else if (istr == serp[2])
		{
			count3++;
		}
		istr = (NULL,serp[0],serp[1],serp[2]);
	}
}
