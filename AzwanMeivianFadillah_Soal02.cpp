#include <iostream>
using namespace std;

int main() {

 long long tahun;

   cout << "Masukan Tahun :";
   cin >> tahun;

   if(tahun % 400 == 0 || (tahun % 4 == 0 && tahun % 100 != 0 )){
     cout << "Tahun Kabisat" << endl;

   }else{
     cout << "Bukan Tahun Kabisat" << endl;

   }

    return 0;
}