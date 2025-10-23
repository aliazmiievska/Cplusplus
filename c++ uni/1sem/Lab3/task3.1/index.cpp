// libraries
#include <iostream>
#include "windows.h"
using namespace std;


// function declaring
//
void input(int** A, int r, int c);
void sum(int** A, int r, int c);
void minA(int** A, int r, int c);


int main()
{
	// main code
	//
    int r, c;

    cout << "Enter the number of rows and columns: ";
    cin >> r >> c;

    int** A = new int* [r];
    for (int i = 0; i < r; i++) 
    {
        A[i] = new int[c];
    }

    input(A, r, c);
    sum(A, r, c);
    minA(A, r, c);

    for (int i = 0; i < r; ++i) 
    {
        delete[] A[i];
    }
    delete[] A;


	// ending
	cout << endl;
	system("pause");
	return 0;
}


// function body
//
void input(int** A, int r, int c)
{
    cout << "Enter the elements of the matrix: " << endl;
    for (int i = 0; i < r; ++i) 
    {
        for (int j = 0; j < c; ++j) 
        {
            cin >> A[i][j];
        }
    }
}

void sum(int** A, int r, int c)
{
    cout << "The sums of even column elements for each row: " << endl;
    for (int i = 0; i < r; ++i) 
    {
        int sum = 0;
        for (int j = 1; j < c; j += 2) 
        {
            sum += A[i][j];
        }
        cout << "Line " << i + 1 << ": " << sum << endl;
    }
}

void minA(int** A, int r, int c)
{
    int minE = A[0][0];
    for (int i = 0; i < r; ++i) 
    {
        for (int j = 0; j < c; ++j) 
        {
            if (A[i][j] < minE) 
            {
                minE = A[i][j];
            }
        }
    }
    cout << "The minimum element of the matrix: " << minE << endl;
}


