#include <iostream>
#include "matrix.h"
using namespace std;

int main()
{
    {
        Matrix A;
        cout << A << endl;
    }

    {
        Matrix A(4);
        cout << A << endl;
    }

    {
        Matrix A(2, 3, 8);
        cout << A << endl;
    }

    {
        Matrix A(5, 4, 9);
        Matrix B(A);
        cout << A << endl;
        cout << B << endl;
    }

    {
        Matrix A(5, 4, 7);
        Matrix B = A;
        cout << A << endl;
        cout << B << endl;
    }

    {
        Matrix A(5, 4, 2);
        cout << A << endl;
        A.changeel(4, 2, 9);
        cout << A << endl;
    }

    {
        Matrix A(4,6, 4);
        cout << A << endl;
        A.printel(2,5);
        cout << endl;
    }

    {
        Matrix A(3, 5, 9);
        Matrix B(4, 3, 7);
        Matrix C = A + B;
        cout << C << endl;
    }

    {
        Matrix A(3, 5, 9);
        Matrix B(4, 3, 7);
        Matrix C = A - B;
        cout << C << endl;
    }

    {
        Matrix A(5, 5, 3);
        Matrix B = A * 3;
        cout << B << endl;
    }

    {
        Matrix A(5, 5, 12);
        Matrix B = A / 3;
        cout << B << endl;
    }

    {
        Matrix A(5, 5, 51);
        Matrix B(5, 5, 12);
        cout << A.bthen(A, B, 1, 4) << endl;
    }

    {
        Matrix A(5, 5, 51);
        Matrix B(5, 5, 12);
        cout << A.lthen(A, B, 1, 4) << endl;
    }

    {
        Matrix A(5, 5, 51);
        Matrix B(5, 5, 51);
        cout << A.nequal(A, B, 1,5) << endl;
    }

    {
        Matrix A(5, 5, 51);
        Matrix B(5, 5, 51);
        cout << A.equal(A, B,1,5) << endl;
    }

    return 0;
}
