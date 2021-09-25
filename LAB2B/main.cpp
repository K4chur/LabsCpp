#include <iostream>
#include <fstream>
#include <bitset>

using namespace std;

short parnist(unsigned int n) {
  bool parity = 0;

  for (int i = 0; i < 15; i++) {
    if (((n >> i) & 1) == 1) {
      parity = !parity;
    }
  }
  return parity;
}

int main()
{
    char ci[8][8];

    ifstream fi("C:/Users/vvojc/Desktop/IFTKN/c++/Lab2B/in.txt");
    if (!fi) {cout << "Error! in.txt" << endl; return -1;}
    else {
        for (int i=0; i < 8; i++){
            for (int j=0; j < 8 ;j++){
                fi >> ci[i][j];
            }
        }
    }

    for (int i=0; i < 8; i++){
        for (int j=0; j < 8 ;j++){
            cout << ci[i][j];
        }
        cout << endl;
    }

    unsigned short co[8][8];
    short parity;
    for (int i=0; i < 8; i++){
        for (int j=0; j < 8 ;j++){
            co[i][j] = i;

            co[i][j] <<= 3;
            co[i][j] |= j;

            co[i][j] <<= 1;
            parity = parnist(co[i][j]);
            co[i][j] |= parity;

            co[i][j] <<= 8;
            co[i][j] |= ci[i][j];

            co[i][j] <<= 1;
            parity = parnist(ci[i][j]);
            co[i][j] |= parity;
            cout << bitset<16>(co[i][j]) << endl;

        }
    }

    ofstream fo("C:/Users/vvojc/Desktop/IFTKN/c++/Lab2B/out.dat",
                       ios::out | ios::binary);
      fo.write(
          (char *)co,
          64 * sizeof(unsigned short));
      fo.close();

    return 0;
}
