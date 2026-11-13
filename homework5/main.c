#include <stdio.h>
#include <math.h>
#include <locale.h>

double u(double x, double y, double z);

int main2 () {
    setlocale(LC_ALL, "RUS");
    double x, y, z;
    printf("введите x y z: ");
    scanf("%lf%lf%lf", &x, &y, &z);
    printf("Result: %lf", u(x, y, z));
    return 0;
}

double u(double x, double y, double z) {
    double top = cbrt(8 + pow(fabs(x - y), 2) + 1);
    double bottom = pow(x, 2) + pow(y, 2) + 2;
    double middle = 0 - exp(fabs(x - y)) * pow((pow(tan(z), 2) + 1), x);

    return top/bottom+middle;
}


