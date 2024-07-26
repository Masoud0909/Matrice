//Adding two matrices and of their main Diagonal are all 0.

#include <iostream>
#include <iomanip>
const int MAX = 5;

using namespace std;

//This function computes the matrix c as a + b. Recall then to add matrcies: c[i][j], = a[i][j] + b[i][j]

void add_mat(double a[][MAX],double b[][MAX], double c[][MAX],int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			c[i][j] = a[i][j] + b[i][j];
	}
}
//Funtion to return true if the elems on the main diagonal of matrix are all 0's.

bool zeroDiagonal(double a[][MAX], int n) {
	bool rref = true;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; i++) {
			rref = false;
			break;
		}
	}
	if (rref)
		cout << "Main Diagonal all 0's" << endl;
	else
		cout << "Main Diagonal has non-zero elements" << endl;

	return rref;
}

void getMat(double mat[][MAX], int size) {
	cout << "Enter " << size << " by " << size << " numbers: \n";
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			cin >> mat[i][j];
}

void printMat(double a[][MAX], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++)
			cout << setw(4) << a[i][j];
		cout << endl;
	}
}

int main()
{
	double a[MAX][MAX];
	double b[MAX][MAX];
	double c[MAX][MAX];

	cout << "Enter size for the sqaure matrix: ";
	int n;
	cin >> n;
	getMat(a, n);
	getMat(b, n);

	add_mat(a, b, c, n);
	
	cout << "\nAddition: \n";
	printMat(c, n);
	zeroDiagonal(c, n);
}
