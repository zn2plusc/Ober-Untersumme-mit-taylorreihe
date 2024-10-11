#include <iostream>
#include <cmath>

using namespace std;

double taylor_exp(double x, int n) {
    double result = 1.0;
    double term = 1.0;

    for (int i = 1; i <= n; ++i) {
        term *= x / i;
        result += term;
    }

    return result;
}

int main() {
    double start, end;
    int sections;

    cout << "Geben Sie den Startwert ein: ";
    cin >> start;
    cout << "Geben Sie den Endwert ein: ";
    cin >> end;
    cout << "Geben Sie die Anzahl der Abschnitte ein: ";
    cin >> sections;

    double dx = (end - start) / sections;
    double upper_sum = 0.0, lower_sum = 0.0;

    for (int i = 0; i < sections; ++i) {
        double xi = start + i * dx;
        double xi_next = xi + dx;

        double taylor_upper = taylor_exp(xi_next, 7);
        double taylor_lower = taylor_exp(xi, 7);

        upper_sum += taylor_upper * dx;
        lower_sum += taylor_lower * dx;
    }

    cout << "Obersumme: " << upper_sum << endl;
    cout << "Untersumme: " << lower_sum << endl;

    return 0;
}
