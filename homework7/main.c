#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Rus");
    int month, year;
    int days;

    printf("¬ведите пор€дковый номер мес€ца (1-12): ");
    scanf("%d", &month);

    printf("¬ведите год: ");
    scanf("%d", &year);

    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            days = 31;
            printf("¬ %d мес€це\n %d года\n %d дней.\n", month, year, days);
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            printf("¬ %d мес€це\n %d года\n %d дней.\n", month, year, days);
            break;

        case 2:

            days = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? 29 : 28;
            printf("¬ %d мес€це\n %d года\n %d дней.\n", month, year, days);
            break;

        default:
            printf("ќшибка: неверно введен номер мес€ца. ¬ведите число от 1 до 12.\n");
            break;
    }

    return 0;
}