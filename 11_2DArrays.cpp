/*
 *  C++ Competitive Programming Template.
 *
 *  Author: Eduardo Cáceres de la Calle
 *
 *  Feel free to fork it and adapt it to your needs
 *  https://gist.github.com/eduherminio/3466a18f8569460fe1012e67c1f58015
 */

#include <iostream>

#define MATRIX_SIZE     6
#define HOURGLASS_SIZE  3

using namespace std;

template <size_t n_rows, size_t n_columns>
void getMatrix(int (&matrix)[n_rows][n_columns]);

template <size_t n_rows, size_t n_columns>
void printMatrix(const int (&matrix)[n_rows][n_columns]);

template <size_t n_rows, size_t n_columns>
int extractHourglass(const int (&matrix)[n_rows][n_columns], int i, int j);

int main()
{
  int matrix[MATRIX_SIZE][MATRIX_SIZE];
  int hourglass_sum, max_hourglass_sum= -9999;

  getMatrix(matrix);
  // printMatrix(matrix);

  for(int i=0; i<4; i++)    {
    for(int j=0; j<4; j++)  {
      hourglass_sum= extractHourglass(matrix, i, j);
      if(hourglass_sum > max_hourglass_sum)
        max_hourglass_sum= hourglass_sum;
    }
  }

  cout<<max_hourglass_sum;

  return (0);
}

template <size_t n_rows, size_t n_columns>
void getMatrix(int (&matrix)[n_rows][n_columns])  {
  int input;
  for (size_t rows=0; rows<MATRIX_SIZE; rows++)   {
    for(size_t columns=0; columns<MATRIX_SIZE; columns++)  {
      cin>> input;
      matrix[rows][columns]= input;
    }
  }
}

template <size_t n_rows, size_t n_columns>
void printMatrix(const int (&matrix)[n_rows][n_columns])  {
  cout<<endl;
  for (size_t rows=0; rows<n_rows; rows++)   {
    for(size_t columns=0; columns<n_columns; columns++)  {
      cout<<matrix[rows][columns]<<" ";
    }
    cout<<endl;
  }
}

template <size_t n_rows, size_t n_columns>
int extractHourglass(const int (&matrix)[n_rows][n_columns], int i, int j)  {
  int hourglass[HOURGLASS_SIZE][HOURGLASS_SIZE];
  int sum=0;

  for(size_t sup_row=i; sup_row<i+HOURGLASS_SIZE; sup_row++) {
    for(size_t left_column=j; left_column<j+HOURGLASS_SIZE; left_column++) {
      hourglass[sup_row-i][left_column-j]= matrix[sup_row][left_column];
      if( (sup_row==i+1 && left_column==j) || (sup_row==i+1 && left_column== j+2) )
        hourglass[sup_row-i][left_column-j]= 0;
      else
        sum+= hourglass[sup_row-i][left_column-j];
    }
  }

  // printMatrix(hourglass);
  // cout<<sum;

  return (sum);
}