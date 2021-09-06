
#include <conio.h>
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n=5, i, min = 0;
    int *A;


    A = (int*)malloc(n * sizeof(int));
    ifstream f("C:/Users/vvojc/Desktop/IFTKN/c++/Lab1AB/1.txt");
    if (!f.is_open()) cout << "Error!" << endl;
    else {
        for (int i = 0; i < n; i++) {
            f >> A[i];
            cout << "A[" << i << "] = " << A[i] << endl;
        }

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
    cout << "min > 0 =" << min << endl;

    free(A);
    _getch();
    return 0;
}
