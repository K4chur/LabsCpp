#include <vector>
#include <conio.h>
#include <iostream>
#include <fstream>

using namespace std;
const int MAX = 100;
int main()
{


    int i, min = 0;

    vector<int> A;
    A.resize(5);

    ifstream f("C:/Users/vvojc/Desktop/IFTKN/c++/Lab1AB/1.txt");
    if (!f.is_open()) {
        cout << "Error!" << endl;
        return 1;}
    else {
        for (int i = 0; i < 5; i++) {
            f >> A[i];
            cout << "A[" << i << "] = " << A[i] << endl;
        }

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
