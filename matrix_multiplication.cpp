#include<iostream>
using namespace std;


int size_1 = 0, size_2 = 0;

void matrix_multiplications(int matrix_first[2][20], int matrix_second[2][20])
{
	// dynamic 2D array
	int **output_matrix = new int *[2];
	
	for(int i = 0; i < 2; i++)
	{
		*output_matrix = new int[size_1];
	}
	
	// initilizing dynamic 2D array with 0
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < size_1; j++)
			output_matrix[i][j] = 0;
	}
	
	// matrix multiplication ( first column into first row, second column into second row)
	
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < size_1; j++)
		{
			for(int k = 0; k < size_1; k++)
			{
				output_matrix[i][j] = output_matrix[i][j] + (matrix_first[i][k] * matrix_second[k][j]);
			}
		}
	}
	
	// displaying result
	cout<<"First Matrix is: \n";
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < size_1; j++)
			cout <<"    " << matrix_first[i][j] <<" ";
		cout << endl;
	}
	cout <<endl;
	
	cout<<"Second Matrix is: \n";
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < size_1; j++)
			cout <<"    " << matrix_second[i][j] <<" ";
		cout << endl;
	}
	cout <<endl;
	
	cout<<"Output Matrix is: \n";
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < size_1; j++)
			cout <<"    " << output_matrix[i][j] <<" ";
		cout << endl;
	}
	
}

int main()
{
	int first_matrix[2][20], second_matrix[2][20];
	
	cout << "Enter columns of both matrixs: ";
	cin >> size_1;
	
	
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < size_1; j++)
		{
			cout << "Enter value of first matrix["<< i << "][" << j << "]: ";
			cin >> first_matrix[i][j];
		}
		cout<<endl;
	}
	cout << endl << endl;
	
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < size_1; j++)
		{
			cout << "Enter value of second matrix["<< i << "][" << j << "]: ";
			cin >> second_matrix[i][j];
		}
		cout<<endl;
	}
	system("cls");
	matrix_multiplications(first_matrix, second_matrix);
	return 0;
}


