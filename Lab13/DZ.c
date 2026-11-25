#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#define arr_size 10000

int main() {
    setlocale(LC_ALL,"RUS");
    int n, arr[arr_size];
    double sum = 0.0;
    printf("Введите количество элементов массива (n): ");
    scanf("%d", &n);

    printf("Введите %d целых чисел:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    double average = sum / n;
    int k = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < average) {
            k++;
        }
    }

    printf("Среднее арифметическое: %.2lf\n", average);
    printf("Количество элементов меньше среднего: %d\n", k);

    return 0;
}
