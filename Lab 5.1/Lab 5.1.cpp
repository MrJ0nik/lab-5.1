#include <iostream>
#include <cmath>
using namespace std;

double h(const double a, const double b); // прототип
double cfunc(double t, double s);

int main()
{
    double s = 0;
    double t = 0;

    cout << "s = ";
    cin >> s;
    cout << "t = ";
    cin >> t;

    double c = cfunc(t, s);
    cout << "c = " << c << endl;

    cin >> s;
    cin >> t;

    return 0;
}

double h(const double a, const double b)
{
    return a * a * sin(b) + b * b * cos(a);
}

double cfunc(double t, double s)
{
    return (pow(h(pow(t, 2), 1), 3) + h(1, t * s * s)) / (1.0 + pow(h(s, t), 2));
}
