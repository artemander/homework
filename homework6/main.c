#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    
    setlocale(LC_ALL, "RUS");

    int total_seconds;
    int hours, minutes, seconds;
    int remainder;

    printf("¬ведите секунды: ");
    scanf("%d", &total_seconds);
    hours = total_seconds / 3600;
    remainder = total_seconds % 3600;
    minutes = remainder / 60;
    seconds = total_seconds % 60;
    printf("–езультат: ");

    if (hours != 0) {
        printf("%d ч. ", hours);
    }

    printf("%d мин. %d сек.\n", minutes, seconds);

    return 0;
}