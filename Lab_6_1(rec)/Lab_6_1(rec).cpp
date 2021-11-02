// Lab_6_1.cpp
// Козубенко Андрій
// Лабораторна робота № 6.1 
// Пошук елементів одновимірного масиву ітераційним та рекурсивним способом.
// Варіант 10
// Рекурсивний спосіб
#include <iostream>
#include <iomanip>
#include <time.h>

using std::cout;
using std::endl;
using std::setw;

void CreateArray(int *c, const int LeftLimit, const int RightLimit, const int size, const int i);
void PrintArray(int *c, const int size, const int i);
void Sum(int *c, const int size, int &S, int &Number, const int i);
void Replace(int *c, const int size, const int i);

int main()
{
	srand((unsigned)time(NULL));

	int S = 0;
	int k = 0;
	int A = 15;
	int B = 85;
	const int n = 21;
	int c[n];

	CreateArray(c, A, B, n, 0);
	PrintArray(c, n, 0);
	Sum(c, n, S, k, 0);
	Replace(c, n, 0);
	PrintArray(c, n, 0);

	cout << "Sum of elements replaced = " << S << endl;
	cout << "Number of elements replaced = " << k << endl << endl;

}

void CreateArray(int *c, const int LeftLimit, const int RightLimit, const int size, const int i)
{
	c[i] = LeftLimit + rand() % (RightLimit - LeftLimit + 1);
	if (i < size - 1)
		CreateArray(c, LeftLimit, RightLimit, size, i + 1);
}

void PrintArray(int *c, const int size, const int i)
{
	if (i == 0)
		cout << "c = " << "{";
	cout << setw(4) << c[i];
	if (i != size - 1)
		cout << ",";

	if (i < size - 1)
		PrintArray(c, size, i + 1);
	else
		cout << " }\n" << endl;
}

void Replace(int *c, const int size, const int i)
{
	if (c[i] % 2 && c[i] % 13 != 0)
		c[i] = 0;

	if (i < size - 1)
		Replace(c, size, i + 1);
}

void Sum(int *c, const int size, int &S, int &Number, const int i)
{
		if (c[i] % 2 && c[i] % 13 != 0)
		{
			S += c[i];
			Number++;
		}

		if (i < size - 1)
			Sum(c, size, S, Number, i + 1);		
}
