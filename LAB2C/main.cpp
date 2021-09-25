#include <iostream>
#include <bitset>

using namespace std;

int main()
{

    int a,b,c,d,e,tempc;

    cout << "input 0 <= a <= 12 "<< endl;
    cout << "int a = ";
    cin >> a;

    cout << "input 0 <= b <= 9 "<< endl;
    cout << "int b = ";
    cin >> b;

    cout << "input 1940 <= a <= 2065 "<< endl;
    cout << "input c = ";
    cin >> tempc;
    c = tempc - 1940;
    //відрізаємо ліву границю 1940
    //при бажанні витягнути число, потрібно просто додати 1940 до нього

    cout << "input 0 <= d <= 31 "<< endl;
    cout << "int d = ";
    cin >> d;

    cout << "input 0 <= e <= 1 "<< endl;
    cout << "int e = ";
    cin >> e;

    cout << a <<" "<< b  <<" "<< tempc  <<" "<<c  <<" "<< d  <<" "<< e << endl;
    bitset<24> res(a);
    bitset<4> bita(a);
    bitset<4> bitb(b);
    bitset<7> bitc(c);
    bitset<5> bitd(d);
    bitset<1> bite(e);

    cout << bita <<" "<< bitb  <<" " <<bitc  <<" "<< bitd  <<" "<< bite << endl;

    res = res << 4;
    res |= b;

    res = res << 7;
    res |= c;

    res = res << 5;
    res |= d;

    res = res << 1;
    res |= e;

    cout << res;
    // при вказанні максимальних значень
    // навіть вийшло зменшити розмір змінної до 21 біта, якщо прибрати перші 3 нулі.
    return 0;
}
