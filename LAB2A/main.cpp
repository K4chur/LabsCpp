#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    int d;

    int res = 0;

    cout << "input a = ";
    cin >> a;

    cout << "input b = ";
    cin >> b;

    cout << "input c = ";
    cin >> c;

    cout << "input d = ";
    cin >> d;

    res = (((a << 4) + (a << 0) + (c << 8) + (c << 5) + (c << 4) + (c << 3)) >> 5) - ((b << 6) + (b << 5) + (b << 4) + (b << 3)) + ((d << 6)+(d << 5) + (d << 4) + (d << 3) + (d << 2) + (d << 1) + (d << 0)) ;

    cout << "(Res 17*a+312*c)/32 - (b*120) + (d*127) = " << res << endl;

    return 0;
}
