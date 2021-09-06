#include <vector>
#include <conio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int n, i, min = 0;


    cout << "input number of numb: ";
    cin >> n;

    vector<int> A;
    A.resize(n);

    srand(time(NULL));
    for (i = 0; i < n; i++) {
        A[i] = (rand() % 21) - 10;
    }

    cout << endl;

    for (i = 0; i < n; i++) {
        cout << "A[" << i << "] = " << A[i] << endl;
    }

    for (i = 0; i < n; i++) {
        if (A[i] > 0) { min = A[i]; break; }
    }

    for (i = 0; i < n; i++) {
        if (A[i] > 0 && min > A[i]) min = A[i];
    }

    cout << endl;
    cout << "min > 0 = " << min << endl;

    _getch();
    return 0;
}
