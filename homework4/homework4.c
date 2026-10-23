#include <stdio.h>
#include <locale.h>

int task(int A, int B, int C);

int main() {
    setlocale(LC_ALL, "RUS");

    int A, B, C, result;
    printf("ââåäèòå À: \n");
    scanf("%d",  &A);
    printf("ââåäèòå B: \n");
    scanf("%d", &B);
    printf("ââåäèòå C: \n");
    scanf("%d", &C);

    result = task(A, B, C);

    printf("ñïîñîáíîñòü òðîéíîé óäàð: %s\n", result ? "àêòèâèðîâàíà" : "íå àêòèâèðîâàííà"  );

    return 0;
}

int task(int A, int B, int C) {
    return ((A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0)) ? 1 : 0;
}
