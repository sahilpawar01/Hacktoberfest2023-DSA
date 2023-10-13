#include <iostream>
using namespace std;

double calculateE(int n) {
    double result = 1.0;
    double term = 1.0;

    for (int i = 1; i <= n; i++) {
        term /= i;
        result += term;
    }

    return result;
}

int main() {
    int n;
    cout << "Enter the number of terms to use in the series: ";
    cin >> n;

    if (n <= 0)
        cout << "Please enter a positive integer.\n";
    else
        cout << "Approximate value of e with " << n << " terms: " << calculateE(n);

    return 0;
}
