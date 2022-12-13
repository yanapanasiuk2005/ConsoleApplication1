#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void mas(int* r, const int size, const int max, const int min, int i)
{
	int M; 
	M = r[i] = min + rand() % (max - min + 1);
	cout << M << " ";
	if (i < size - 1)
		mas(r, size, max, min, i + 1);
}
void sum(int* r, const int size, int i, int S)
{
	if ((r[i] % 6 == 0) || (i % 5 != 0))
	{
		S += r[i];
	}
	if (i < size - 1)
		sum(r, size, i + 1, S);
	else {
		cout << endl; 
		cout << "Sum = " << S << endl; 
	}
}
void count(int* r, const int size, int i, int C)
{
	if ((r[i] % 6 == 0) || (i % 5 != 0))
	{
		C++;
	}
	if (i < size - 1)
		count(r, size, i + 1, C);
	else {
		cout << endl;
		cout << "Count = " << C << endl;
	}

}
void obn(int* r, const int size, int i)
{
	if ((r[i] % 6 == 0) || (i % 5 != 0))
	{
		r[i] = 0;
	}
	cout << r[i] << " ";
	if (i < size - 1)
		obn(r, size, i + 1);
}
int main()
{
	srand((unsigned)time(NULL));
	const int n = 25;
	const int d = 70;
	int r[n];
	int i = 0;
	int S = 0;
	int C = 0;
	int max = 73;
	int min = 4;
	mas(r, n, max, min, i);
	sum(r, n, i, S);
	count(r, n, i, C);
	obn(r, n, i);
	return 0;
}