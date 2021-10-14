#include <iostream>
#include "rect.h"
using namespace std;

int main()
{
    double a;
    double b;
    string c;

    cout << "Input hight: ";
    cin >> a;
    cout << "Input weight: ";
    cin >> b;
    cout << "Input a color: ";
    cin >> c;

    Rect A(a,b,c);

    A.print();

    return 0;
}
