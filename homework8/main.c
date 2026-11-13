#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");
    int N;
    double p = 1.0;

    printf("Введите целое число N: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("Ошибка: N должно быть больше нуля.\n");
        return 1;
    }

    for (int i = 1; i <= N; i++) {
        double c = 1.0 + (i / 10.0);
        p *= c;
    }

    printf("Произведение от 1.1 до 1.%d равно: %lf\n", N, p);

    return 0;
}