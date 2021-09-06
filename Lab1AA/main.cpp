
#include <conio.h>
#include <iostream>
using namespace std;
const int MAX = 100;
int main()
{
    double A[MAX];
    int n, i, min=0;
    do {
        cout << " Input numb of elements in N <" << MAX << endl;
        cin >> n;
    } while (n<0 || n>MAX);

    for (i = 0;i<n ;i++ ) {
        cout << "A[" << i << "] = ";
        cin >> A[i];
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

        _getch();
        return 0;
}
