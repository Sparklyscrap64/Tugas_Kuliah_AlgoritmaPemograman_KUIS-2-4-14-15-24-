#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long maxTotal = a[0];
    
    for (int i = 0; i < n; i++) {
        long long currentSum = 0;
        for (int j = i; j < n; j++) {
            currentSum += a[j];
            if (currentSum > maxTotal) {
                maxTotal = currentSum;
            }
        }
    }

    cout << maxTotal << endl;

    return 0;
}