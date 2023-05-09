#include "Func.h"
double** AddMatrix(double** A, double** B, int N, int M)
{
	double** C = new double* [N];
	for (int i = 0; i < N; i++)
	{
		C[i] = new double[M];
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			C[i][j] = A[i][j] + B[i][j];
		}
	}
	return C;
}
double** MinusMatrix(double** A, double** B, int N, int M)
{
	double** C = new double* [N];
	for (int i = 0; i < N; i++)
	{
		C[i] = new double[M];
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			C[i][j] = A[i][j] - B[i][j];
		}
	}
	return C;
}
double** UmnMatrix(double** A, double** B, int N_A, int M_A, int N_B, int M_B)
{
	double** C = new double* [N_A];
	for (int i = 0; i < N_A; i++)
	{
		C[i] = new double[M_B];
	}

	for (int i = 0; i < N_A; i++)
	{
		for (int j = 0; j < M_B; j++)
		{
			C[i][j] = 0;
			for (int t = 0; t < M_A; t++)
			{
				C[i][j] += A[i][t] * B[t][j];
			}
		}
	}
	for (int i = 0; i < N_A; i++)
	{
		for (int j = 0; j < M_B; j++)
		{
			C[i][j] = Rounding(C[i][j]);
		}
	}
	return C;
}
double** UmnMatrixChislo(double** A, int N, int M,int num)
{
	double** C = new double* [N];
	for (int i = 0; i < N; i++)
	{
		C[i] = new double[M];
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			C[i][j] = A[i][j] * num;
		}
	}
	return C;
}
double** Transp(double** A, int N, int M)
{
	double** C = new double* [M];
	for (int i = 0; i < M; i++)
	{
		C[i] = new double[N];
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			C[j][i] = A[i][j];
		}
	}
	return C;
}
double** pow(double** A, int N, int M, int num)
{
	double** C = new double* [N];
	for (int i = 0; i < N; i++)
	{
		C[i] = new double[M];
	}
	C = A;
	for (int i = 1; i < num; i++)
	{
		C = UmnMatrix(A, C, N, M, N, M);
	}
	return C;
}
double** Invers(double** A, int N)
{
	double** C = new double* [N];
	for (int i = 0; i < N; i++)
	{
		C[i] = new double[N];
	}
	int k, k1;
	for (int index1 = 0; index1 < N; index1++)
	{
		for (int index2 = 0; index2 < N; index2++)
		{
			k = index1; k1 = index2;
			double** temp = new double* [N - 1];
			for (int i = 0; i < N - 1; i++)
				temp[i] = new double[N - 1];
			int s = 0, s1 = 0;
			for (int i = 0; i < N; ++i)//строим матрицу минора участвующего в вычислении алгебраисческого дополнения
				if (i != k)
				{
					s1 = 0;
					for (int j = 0; j < N; ++j)
						if (j != k1)
						{
							temp[s][s1] = A[i][j];
							s1++;
						}
					s++;
				}
			C[index1][index2] = pow((-1), (index1 + 1) + (index2 + 1)) * det(temp, N - 1);
		}
	}
	C = Transp(C, N, N);
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			C[i][j] = C[i][j] / det(A, N);
		}
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			C[i][j] = Rounding1(C[i][j]);
		}
	}
	return C;
}
double det(double** M, int N){
	
	double Det(0);
	if (N == 1)
	{
		return M[0][0];
	}
	else if (N == 2)
	{
		Det =	M[0][0] * 
				M[1][1] - 
				M[0][1] * 
				M[1][0];
		return Det;
	}
	else if (N == 3)
	{
		for (int i = 0; i < N; i++)
		{
			Det +=	M[0][((i) % N)] * 
					M[1][((i + 1) % N)] * 
					M[2][((i + 2) % N)] - 
					M[0][((i + 2) % N)] * 
					M[1][((i + 1) % N)] * 
					M[2][((i) % N)];
		}
		return Det;
	}
	else if (N == 4)
	{
		for (int i = 0; i < N; i++)
		{
			Det += M[0][(i) % N] *
				M[1][(i + 1) % N] *
				M[2][(i + 2) % N] *
				M[3][(i + 3) % N] -
				M[0][(i + 3) % N] *
				M[1][(i + 2) % N] *
				M[2][(i + 1) % N] *
				M[3][(i) % N];
		}
		return Det;
	}
	else if (N == 5)
	{
		for (int i = 0; i < N; i++)
		{
			Det +=	M[0][(i) % N] *
					M[1][(i + 1) % N] *
					M[2][(i + 2) % N] *
					M[3][(i + 3) % N] *
					M[4][(i + 4) % N] -
					M[0][(i + 4) % N] *
					M[1][(i + 3) % N] *
					M[2][(i + 2) % N] *
					M[3][(i + 1) % N] *
					M[4][(i) % N];
		}
		return Det;
	}
	else if (N == 6)
	{
		for (int i = 0; i < N; i++)
		{
			Det += M[0][(i) % N] *
				M[1][(i + 1) % N] *
				M[2][(i + 2) % N] *
				M[3][(i + 3) % N] *
				M[4][(i + 4) % N] *
				M[5][(i + 5) % N] -
				M[0][(i + 5) % N] *
				M[1][(i + 4) % N] *
				M[2][(i + 3) % N] *
				M[3][(i + 2) % N] *
				M[4][(i + 1) % N] *
				M[5][(i) % N];
		}
		return Det;
	}
	else if (N == 7)
	{
		for (int i = 0; i < N; i++)
		{
			Det += M[0][(i) % N] *
				M[1][(i + 1) % N] *
				M[2][(i + 2) % N] *
				M[3][(i + 3) % N] *
				M[4][(i + 4) % N] *
				M[5][(i + 5) % N] *
				M[6][(i + 6) % N] -
				M[0][(i + 6) % N] *
				M[1][(i + 5) % N] *
				M[2][(i + 4) % N] *
				M[3][(i + 3) % N] *
				M[4][(i + 2) % N] *
				M[5][(i + 1) % N] *
				M[6][(i) % N];
		}
		return Det;
	}
	else if (N == 8)
	{
		for (int i = 0; i < N; i++)
		{
			Det += M[0][(i) % N] *
				M[1][(i + 1) % N] *
				M[2][(i + 2) % N] *
				M[3][(i + 3) % N] *
				M[4][(i + 4) % N] *
				M[5][(i + 5) % N] *
				M[6][(i + 6) % N] *
				M[7][(i + 7) % N] -
				M[0][(i + 7) % N] *
				M[1][(i + 6) % N] *
				M[2][(i + 5) % N] *
				M[3][(i + 4) % N] *
				M[4][(i + 3) % N] *
				M[5][(i + 2) % N] *
				M[6][(i + 1) % N] *
				M[7][(i) % N];
		}
		return Det;
	}
	else if (N == 9)
	{
		for (int i = 0; i < N; i++)
		{
			Det += M[0][(i) % N] *
				M[1][(i + 1) % N] *
				M[2][(i + 2) % N] *
				M[3][(i + 3) % N] *
				M[4][(i + 4) % N] *
				M[5][(i + 5) % N] *
				M[6][(i + 6) % N] *
				M[7][(i + 7) % N] *
				M[8][(i + 8) % N] -
				M[0][(i + 8) % N] *
				M[1][(i + 7) % N] *
				M[2][(i + 6) % N] *
				M[3][(i + 5) % N] *
				M[4][(i + 4) % N] *
				M[5][(i + 3) % N] *
				M[6][(i + 2) % N] *
				M[7][(i + 1) % N] *
				M[8][(i) % N];
		}
		return Det;
	}
	else if (N == 10)
	{
		for (int i = 0; i < N; i++)
		{
			Det += M[0][(i) % N] *
				M[1][(i + 1) % N] *
				M[2][(i + 2) % N] *
				M[3][(i + 3) % N] *
				M[4][(i + 4) % N] *
				M[5][(i + 5) % N] *
				M[6][(i + 6) % N] *
				M[7][(i + 7) % N] *
				M[8][(i + 8) % N] *
				M[9][(i + 9) % N] -
				M[0][(i + 9) % N] *
				M[1][(i + 8) % N] *
				M[2][(i + 7) % N] *
				M[3][(i + 6) % N] *
				M[4][(i + 5) % N] *
				M[5][(i + 4) % N] *
				M[6][(i + 3) % N] *
				M[7][(i + 2) % N] *
				M[8][(i + 1) % N] *
				M[9][(i) % N];
		}
		return Det;
	}
}
double Rounding(double Num)
{
	int integer = Num;
	Num -= integer;
	bool znak = false;
	long long rere = (long long)(Num * 1000000000000) % 1000000000000;
	if (rere < 0)
	{
		rere = -rere;
		znak = true;
	}
	if (rere % 10 >= 5)
	{
		rere += 10;
		rere -= rere % 10;
	}
	else if (rere % 10 < 5)
	{
		rere -= rere % 10;
	}
	if ((rere % 100 / 10) >= 5)
	{
		rere += 100;
		rere -= (rere % 100);
	}
	else if ((rere % 100 / 10) < 5)
	{
		rere -= (rere % 100);
	}
	if ((rere % 1000 / 100) >= 5)
	{
		rere += 1000;
		rere -= ((rere % 1000));
	}
	else if ((rere % 1000 / 100) < 5)
	{
		rere -= ((rere % 1000));
	}
	if ((rere % 10000 / 1000) >= 5)
	{
		rere += 10000;
		rere -= (rere % 10000);
	}
	else if ((rere % 10000 / 1000) < 5)
	{
		rere -= (rere % 10000);
	}
	if ((rere % 100000 / 10000) >= 5)
	{
		rere += 100000;
		rere -= (rere % 100000);
	}
	else if ((rere % 100000 / 10000) < 5)
	{
		rere -= (rere % 100000);
	}
	if ((rere % 1000000 / 100000) >= 5)
	{
		rere += 1000000;
		rere -= (rere % 1000000);
	}
	else if ((rere % 1000000 / 100000) < 5)
	{
		rere -= (rere % 1000000);
	}
	if ((rere % 10000000 / 1000000) >= 5)
	{
		rere += 10000000;
		rere -= (rere % 10000000);
	}
	else if ((rere % 10000000 / 1000000) < 5)
	{
		rere -= (rere % 10000000);
	}
	if ((rere % 100000000 / 10000000) >= 5)
	{
		rere += 100000000;
		rere -= (rere % 100000000);
	}
	else if ((rere % 100000000 / 10000000) < 5)
	{
		rere -= (rere % 100000000);
	}
	if ((rere % 1000000000 / 100000000) >= 5)
	{
		rere += 1000000000;
		rere -= (rere % 1000000000);
	}
	else if ((rere % 1000000000 / 100000000) < 5)
	{
		rere -= (rere % 1000000000);
	}
	if ((rere % 10000000000 / 1000000000) >= 5)
	{
		rere += 10000000000;
		rere -= (rere % 10000000000);
	}
	else if ((rere % 10000000000 / 1000000000) < 5)
	{
		rere -= (rere % 10000000000);
	}
	Num = (double)rere / 1000000000000;
	Num += integer;
	if (znak)
	{
		Num = -Num;
	}
	return Num;
}
double Rounding1(double Num)
{
	int integer = Num;
	Num -= integer;
	bool znak = false;
	long long rere = (long long)(Num * 1000000000000) % 1000000000000;
	if (rere < 0)
	{
		rere = -rere;
		znak = true;
	}
	if (rere % 10 >= 5)
	{
		rere += 10;
		rere -= rere % 10;
	}
	else if (rere % 10 < 5)
	{
		rere -= rere % 10;
	}
	if ((rere % 100 / 10) >= 5)
	{
		rere += 100;
		rere -= (rere % 100);
	}
	else if ((rere % 100 / 10) < 5)
	{
		rere -= (rere % 100);
	}
	if ((rere % 1000 / 100) >= 5)
	{
		rere += 1000;
		rere -= ((rere % 1000));
	}
	else if ((rere % 1000 / 100) < 5)
	{
		rere -= ((rere % 1000));
	}
	if ((rere % 10000 / 1000) >= 5)
	{
		rere += 10000;
		rere -= (rere % 10000);
	}
	else if ((rere % 10000 / 1000) < 5)
	{
		rere -= (rere % 10000);
	}
	if ((rere % 100000 / 10000) >= 5)
	{
		rere += 100000;
		rere -= (rere % 100000);
	}
	else if ((rere % 100000 / 10000) < 5)
	{
		rere -= (rere % 100000);
	}
	if ((rere % 1000000 / 100000) >= 5)
	{
		rere += 1000000;
		rere -= (rere % 1000000);
	}
	else if ((rere % 1000000 / 100000) < 5)
	{
		rere -= (rere % 1000000);
	}
	if ((rere % 10000000 / 1000000) >= 5)
	{
		rere += 10000000;
		rere -= (rere % 10000000);
	}
	else if ((rere % 10000000 / 1000000) < 5)
	{
		rere -= (rere % 10000000);
	}
	Num = (double)rere / 1000000000000;
	Num += integer;
	if (znak)
	{
		Num = -Num;
	}
	return Num;
}