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
    ifstream fo;
    fo.open("C:/Users/vvojc/Desktop/IFTKN/c++/Lab2B/out.dat", ios::in | ios::binary);
    unsigned short fromBinary[8][8];
    fo.read((char *)&fromBinary, 64 * sizeof(unsigned short));

    char co[8][8];
    int counteri = 0;
    int counterj = 0;

    for (int i=0; i < 8; i++){
        for (int j=0; j < 8 ;j++){
            char symbol = (fromBinary[i][j] >> 1) & ((1 << 8) - 1);
            short position = (fromBinary[i][j] >> 10) & ((1 << 3) - 1);
            short position2 = (fromBinary[i][j] >> 13) & ((1 << 3) - 1);
            cout << "position i = "<< position << endl;
            cout << "position j = "<< position2 << endl;
            cout << "symbol = "<< symbol << endl;

            counteri = position2;
            counterj = position;
            co[counteri][counterj] = symbol;

        }
    }

    for (int i=0; i < 8; i++){
        for (int j=0; j < 8 ;j++){
            cout << co[i][j];
        }
        cout << endl;
    }

    ofstream decrypt("C:/Users/vvojc/Desktop/IFTKN/c++/Lab2Bdecrypt/out.txt", ios::out);

    for (int i=0; i < 8; i++){
        for (int j=0; j < 8 ;j++){
            decrypt << co[i][j];
        }
        decrypt << endl;
    }
      decrypt.close();

    return 0;
}
