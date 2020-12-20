#define N 4
int main()
{
	int matrix[N][N] = {{1,2,3,4},
                   	    {1,2,3,4},
                   	    {1,2,3,4},
                   	    {1,2,3,4}};
	int matrix_result[N][N] = {0};
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			matrix_result[i][j]=0;
			for(int k = 0; k < N; k++)
			{
				matrix_result[i][j] += matrix[i][k]*matrix[k][j];
			}
		}
	}
	return 0;
}
