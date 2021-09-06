
#include <conio.h>
#include <iostream>
using namespace std;
const int MAX = 100;
int main()
{
    int n, i, min = 0;
    int *A;

    do {
        cout << " Input numb of elements in N <" << MAX << endl;
        cin >> n;
        cout << endl;
    } while (n<0 || n>MAX);

    A = (int*)malloc(n * sizeof(int));
    for (i = 0;i < n;i++) {
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

    free(A);
    _getch();
    return 0;
}

