#include <conio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
const int MAX = 100;
int main()
{

    double A[MAX];
    int n, i, min = 0;

    cout << "input number of numb: ";
    cin >> n ;

    srand(time(NULL));
    for (i = 0; i < n; i++) {
        A[i] = (rand() % 21) - 10;
    }

    for (i = 0; i < n; i++) {
        cout << "A[" << A[i] << "]" << endl;
    }

    cout << endl;


    for (i = 0; i < 5; i++) {
        if (A[i] > 0) { min = A[i]; break; }
    }

    for (i = 0; i < 5; i++) {
        if (A[i] > 0 && min > A[i]) min = A[i];
    }

    cout << "min > 0 =" << min << endl;

    _getch();
    return 0;
}


