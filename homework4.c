#include <stdio.h>
#include <locale.h>

int task(int A, int B, int C);

int main() {
    setlocale(LC_ALL, "RUS");

    int A, B, C, result;
    printf("введите А: \n");
    scanf("%d",  &A);
    printf("введите B: \n");
    scanf("%d", &B);
    printf("введите C: \n");
    scanf("%d", &C);

    result = task(A, B, C);

    printf("способность тройной удар: %s\n", result ? "активирована" : "не активированна"  );

    return 0;
}

int task(int A, int B, int C) {
    return ((A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0)) ? 1 : 0;
}
