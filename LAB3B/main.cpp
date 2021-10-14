#include <iostream>
#include "vector.h"

using namespace std;

int main()
{

    {
        Vec A;
        cout << "Array A1: " << A << endl;
    }

    {
        Vec A(8);
        cout <<"Array A2: " << A << endl;
    }

    {
        Vec A(8,2);
        cout <<"Array A3: " << A << endl;
    }

    {
        Vec A(-1);
    }

    {
        Vec A(8,2);
        Vec B(A);
        cout << "Array A3: " << A << endl;
        cout << "Array B1(copy): " << B << endl;
    }

    {
        Vec A(5,4);
        Vec B;
        B = A;
        cout << "Array A4: " << A << endl;
        cout << "Array B2(copy): " << B << endl;
    }

    {
        Vec A(5,3);
        Vec B(6,2);
        Vec C = A + B;
        cout << "Array A5: " << A << endl;
        cout << "Array B3: " << B << endl;
        cout << "Array C1: " << C << endl;
    }

    {
        Vec A(5,3);
        Vec B(6,4);
        Vec C = A - B;
        cout << "Array A6: " << A << endl;
        cout << "Array B4: " << B << endl;
        cout << "Array C2: " << C << endl;
    }

    {
        Vec A(6,2);
        Vec B = A*3;
        cout << "Array A7: " << A << endl;
        cout << "Array B5: " << B << endl;
    }

    {
        Vec A(6,2);
        Vec B = A/3;
        cout << "Array A7: " << A << endl;
        cout << "Array B5: " << B << endl;
    }

    {
        Vec A(5);
        cout << "Array A8: " << A << endl;
        A.changeel(2, 7);
        cout << "Array A8(afterchange): " << A << endl;
    }

    {
        Vec A(5);
        cout << "Array A9: " << A << endl;
        cout << "We are going to print a number on 4 position :";
        A.printel(3);
        cout << endl;
    }

    {
        Vec A(5,5);
        Vec B(6,4);
        cout << "Array A10: " << A << endl;
        cout << "Array B6: " << B << endl;
        cout << "1- True, 0- False. Answer: " << A.bthen(A, B, 3) << endl;
    }

    {
        Vec A(5,5);
        Vec B(6,4);
        cout << "Array A11: " << A << endl;
        cout << "Array B7: " << B << endl;
        cout << "1- True, 0- False. Answer: " << A.lthen(A, B, 3) << endl;
    }

    {
        Vec A(5,5);
        Vec B(6,4);
        cout << "Array A12: " << A << endl;
        cout << "Array B8: " << B << endl;
        cout << "1- True, 0- False. Answer: " << A.equal(A, B) << endl;
    }

    {
        Vec A(5,5);
        Vec B(6,4);
        cout << "Array A13: " << A << endl;
        cout << "Array B9: " << B << endl;
        cout << "1- True, 0- False. Answer: " << A.nequal(A, B) << endl;
    }


}
