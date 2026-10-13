#include <iostream>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;

    int total = 0;

    for (long long p = a; p + 2 <= b; p++) {
        if (p < 2) continue;

        bool prima1 = true;
        for (long long i = 2; i < p; i++) {
            if (p % i == 0) {
                prima1 = false;
                break;
            }
        }

        if (prima1 == true) {
            long long p2 = p + 2;
            bool prima2 = true;
            
            for (long long i = 2; i < p2; i++) {
                if (p2 % i == 0) {
                    prima2 = false;
                    break;
                }
            }
            if (prima2 == true) {
                total++;
            }
        }
    }

    cout << total << endl;

    return 0;
}