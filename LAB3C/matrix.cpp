#include "matrix.h"
#include <math.h>


Matrix::Matrix()
{
    row = 4;
    col = 3;

    array = new double*[row];
    for(unsigned int i = 0; i < row; i++) {
        array[i]= new double[col];
    }

    for(unsigned int i = 0; i < row; i++) {
        for(unsigned int j = 0; j < col; j++) {
            array[i][j] = 0;
        }
    }
}

Matrix::~Matrix()
{
    if (array){
        for(unsigned int i = 0; i < row; i++){
            delete[] array[i];
        }
        delete[] array;
    }

}

Matrix::Matrix(unsigned int row_)
{
    row = row_;
    col = row;

    array = new double*[row];
    for(unsigned int i = 0; i < row; i++) {
        array[i]= new double[col];
    }

    for(unsigned int i = 0; i < row; i++) {
        for(unsigned int j = 0; j < col; j++) {
            array[i][j] = 0;
        }
    }
}

Matrix::Matrix(unsigned int row_, unsigned int col_, int value)
{
    row=row_;
    col=col_;

    array = new double*[row];
    for(unsigned int i = 0; i < row; i++) {
        array[i]= new double[col];
    }

    for(unsigned int i = 0; i < row; i++) {
        for(unsigned int j = 0; j < col; j++) {
            array[i][j] = value;
        }
    }
}

Matrix::Matrix(const Matrix &input)
{
    if (this != &input) {
        row = input.row;
        col = input.col;
        array = new double*[row];
        for(unsigned int i = 0; i < row; i++) {
            array[i]= new double[col];
        }
        for(unsigned int i = 0; i < row; i++) {
            for(unsigned int j = 0; j < col; j++) {
                array[i][j] = input.array[i][j];
            }
        }
      }
}

Matrix &Matrix::operator=(const Matrix &copy)
{
    if (row != copy.row & col != copy.col) {
        if (array)
          delete[] array;
        row = copy.row;
        array = new double*[row];
        for(unsigned int i = 0; i < row; i++) {
            array[i]= new double[col];
        }
      }
      for (unsigned int i = 0; i < row; i++)
          for(unsigned int j = 0; j < col; j++){
              array[i][j] = copy.array[i][j];
          }
      return *this;
}

void Matrix::changeel(unsigned int row_, unsigned int col_, double number)
{

    if (array) {
        if (row_ <= row & col_ <= col) {
          array[row_][col_] = number;
        } else
          std::cout << "Error: missing raws or columns." << std::endl;
      }
}

void Matrix::printel(unsigned int row_, unsigned int col_)
{
    if (array) {
        if (row_ <= row & col_ <= col) {
          std::cout << array[row_][col_] << std::endl;
        } else
          std::cout << "Error: missing raws or columns." << std::endl;
      }
}

Matrix Matrix::operator+(const Matrix &b) const
{
    int lessrow;
    int lesscol;
        if (row < b.row) lessrow = row ;
            else  lessrow = b.row;
        if (col < b.col) lesscol = col ;
            else  lesscol = b.col;
      if (lessrow >= 0 & lesscol >= 0) {
        Matrix result(lessrow, lesscol, 0);

        for (int i = 0; i < lessrow; i++) {
            for (int j = 0; j < lesscol; j++){
             result.array[i][j] = array[i][j] + b.array[i][j];
            }
        }
        return result;
      }

      std::cout << "something went wrong!"<< std::endl;
      return Matrix();
}

Matrix Matrix::operator-(const Matrix &b) const
{
    int lessrow;
    int lesscol;
        if (row < b.row) lessrow = row ;
            else  lessrow = b.row;
        if (col < b.col) lesscol = col ;
            else  lesscol = b.col;
      if (lessrow >= 0 & lesscol >= 0) {
        Matrix result(lessrow, lesscol, 0);

        for (int i = 0; i < lessrow; i++) {
            for (int j = 0; j < lesscol; j++){
             result.array[i][j] = array[i][j] - b.array[i][j];
            }
        }
        return result;
      }

      std::cout << "something went wrong!"<< std::endl;
      return Matrix();
}

Matrix Matrix::operator*(double num) const
{
    Matrix result(row, col, 0);

    for (unsigned int i = 0; i < row; i++) {
        for (unsigned int j = 0; j < col; j++){
         result.array[i][j] = array[i][j] * num;
        }
    }
    return result;

}

Matrix Matrix::operator/(double num) const
{
    Matrix result(row, col, 0);

    for (unsigned int i = 0; i < row; i++) {
        for (unsigned int j = 0; j < col; j++){
         result.array[i][j] = array[i][j] / num;
        }
    }
    return result;

}

bool Matrix::bthen(const Matrix &a, const Matrix &b, int row_, int col_) const
{
    if (a.array[row_][col_] <= b.array[row_][col_])
      return false;
    return true;
}

bool Matrix::lthen(const Matrix &a, const Matrix &b, int row_, int col_) const
{
    if (a.array[row_][col_] >= b.array[row_][col_])
      return false;
    return true;
}

bool Matrix::equal(const Matrix &a, const Matrix &b, int row_, int col_) const
{
    if (a.array[row_][col_] == b.array[row_][col_])
      return false;
    return true;
}

bool Matrix::nequal(const Matrix &a, const Matrix &b, int row_, int col_) const
{
    if (a.array[row_][col_] != b.array[row_][col_])
      return false;
    return true;
}

std::ostream &operator<<(std::ostream &os, const Matrix &m)
{
    for (unsigned int i = 0; i < m.row; i++, os << std::endl ) {
        for (unsigned int j = 0; j < m.col; j++){

            os << m.array[i][j] << " ";
        }
      }
      return os;
}
