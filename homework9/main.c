#include <locale.h>
#include <stdio.h>


int main() {
    setlocale(LC_ALL, "RUS");
    char symbol;
    int side1, side2, side3;

    printf("¬ведите символ дл€ рисовани€ (например *): ");
    scanf("%c", &symbol);

    printf("¬ведите сторону 1 (верхний левый квадрат): ");
    scanf("%d", &side1);

    printf("¬ведите сторону 2 (центральный/пересечение): ");
    scanf("%d", &side2);

    printf("¬ведите сторону 3 (нижний правый квадрат): ");
    scanf("%d", &side3);

    int total_width = (side1 > side2) ? (side1 + side3 - side2) : side3;
    int total_height = (side1 > side2) ? (side1 + side3 - side2) : side3;

    printf("\n");

    for (int y = 0; y < total_height; y++) {
        for (int x = 0; x < total_width; x++) {

            int in_square1 = (x < side1 && y < side1);
            int in_square2 = (x >= (side1 - side2) && x < side1 && y >= (side1 - side2) && y < side1);
            int in_square3 = (x >= (side1 - side2) && y >= (side1 - side2));

            if (in_square2) {
                printf(" ");
            } else if (in_square1) {
                printf("%c", symbol);
            } else if (in_square3 && (x - (side1 - side2) < side3) && (y - (side1 - side2) < side3)) {
                printf("%c", symbol);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}