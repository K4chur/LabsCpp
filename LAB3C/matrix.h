#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>

class Matrix
{
private:
    double** array;
    unsigned int row;
    unsigned int col;
    int state;

public:
    Matrix();
    ~Matrix();
    Matrix(unsigned int row_);
    Matrix(unsigned int row_, unsigned int col_, int value);

    Matrix(const Matrix &input);
    Matrix &operator=(const Matrix &copy);

    void changeel(unsigned int row_, unsigned int col_, double number = 0);
    void printel(unsigned int row_, unsigned int col_);

    Matrix operator+(const Matrix &b) const;
    Matrix operator-(const Matrix &b) const;
    Matrix operator*(double num) const;
    Matrix operator/(double num) const;

    bool bthen(const Matrix &a, const Matrix &b, int row_, int col_) const;
    bool lthen(const Matrix &a, const Matrix &b, int row_, int col_) const;
    bool nequal(const Matrix &a, const Matrix &b, int row_, int col_) const;
    bool equal(const Matrix &a, const Matrix &b, int row_, int col_) const;

    friend std::ostream &operator<<(std::ostream &os, const Matrix &m);

};

#endif // MATRIX_H
