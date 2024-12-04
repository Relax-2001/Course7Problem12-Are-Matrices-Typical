
#include <iostream>
#include <iomanip>

using namespace std;

int RandomNumber(int From, int To)
{

	int RandomNum = rand() % (To - From + 1) + From;

	return RandomNum;
}

void FillMatrix(short Arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			Arr[i][j] = RandomNumber(1, 10);
		}
	}
}

void PrintMatrix(short Arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			printf(" %0*d\t", 2, Arr[i][j]);
		}
		cout << "\n";
	}
}

bool AreMatricesTypical(short Arr1[3][3], short Arr2[3][3], short Rows, short Cols)
{

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Arr1[i][j] != Arr2[i][j])
			{
				return false;
			}
		}
	}
	return true;
}


int main()
{

	srand((unsigned)time(NULL));

	short Arr1[3][3], Arr2[3][3];

	FillMatrix(Arr1, 3, 3);
	cout << "\nMatris :\n";
	PrintMatrix(Arr1, 3, 3);

	FillMatrix(Arr2, 3, 3);
	cout << "\nMatris :\n";
	PrintMatrix(Arr2, 3, 3);

	if (AreMatricesTypical(Arr1 , Arr2 , 3 , 3))
	{
		cout << "\nYes, matrices are typical.\n";
	}
	else
	{
		cout << "\nNo, matrices are not typical.\n";
	}
	

	return 0;
}