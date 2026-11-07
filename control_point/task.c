#include <math.h>
#include <stdio.h>

int main(void) {
    double a, b, c;
    double d, e, f, k;
    scanf("%lf%lf%lf", &a, &b, &c);

    d = sin(a);
    e = sin(b);
    f = sin(c);
    k = d + e + f;

    printf("%lf\n", k);

    if (k>=1) {
        printf("molodec");
    }
    else {
        double sum = 0;
        while (a < b)
        {
            sum += a;
            a++;
        }
        printf("%lf", sum);
    }
    return 0;
}