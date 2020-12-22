int Funk_nod(int a, int b);
int main()
{
	int numb1 = 50; 
	int numb2 = 175;
	int nod;
	nod = Funk_nod(numb1,numb2);
	return 0;
}
int Funk_nod(int numb1,int numb2 )
{
	int nod;
	if ( numb1 != 0 && numb2 != 0 )
	{     
                if ( numb1 > numb2 )
		{
                        nod = numb1 % numb2;
                }
                else{
                        nod = numb2 % numb1;
                }
        }
        return nod;

}
