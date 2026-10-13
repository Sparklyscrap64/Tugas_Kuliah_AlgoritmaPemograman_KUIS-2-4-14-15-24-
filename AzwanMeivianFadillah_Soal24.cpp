#include <iostream>
using namespace std;

int main() {
    int totalBelanja, uangBayar;
    cin >> totalBelanja >> uangBayar;

   
    int kembalian = uangBayar - totalBelanja;

    if (kembalian < 0) {
        cout << "Uang tidak cukup!" << endl;
    } else if (kembalian == 0) {
        cout << "Uang pas, tidak ada kembalian." << endl;
    } else {
      
        int pecahan[] = {100000, 50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100};
        int jumlahPecahan = 10;

        cout << "Kembalian: " << kembalian << endl;
        cout << "Rincian pecahan:" << endl;

        for (int i = 0; i < jumlahPecahan; i++) {
            if (kembalian >= pecahan[i]) {
                int lembar = kembalian / pecahan[i]; 
                kembalian = kembalian % pecahan[i];   

                cout << pecahan[i] << " : " << lembar << endl;
            }
        }
    }

    return 0;
}