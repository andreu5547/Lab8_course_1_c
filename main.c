#include <stdio.h>
#include "Strend.h"
#include "StringVectors.h"
#include "input_int.h"

int main() {
    // NUM 1
    puts("Num 1");
    char s[] = "abra"; // Первая строка
    char t[] = "bra"; // Строка вторая, которую проверяем, есть ли она в конце 1-й
    printf("String 1: %s String 2: %s Result: %d\n\n", s, t, strend(s, t));

    //NUM 2
    puts("\nNum 2");
    int numOfStr = 0;
    puts("Input num of string:");
    numOfStr = input_int();
    CVector **arr = malloc(numOfStr * sizeof(CVector *)); // Выделим память под массив, для хранения строк

    puts("Input strings:"); // Считаем строки от пользователя
    for (int i = 0; i < numOfStr; ++i) {
        arr[i] = input_cvector();
    }

    quickSortHoaraCVecrorByLen(arr, 0, numOfStr - 1); // Сортировка строк по длинне

    for (int i = 0; i < numOfStr; ++i) { // Выведем отсортированные строки
        print_cvector(arr[i]);
    }

    // Очистим память
    for (int i = 0; i < numOfStr; ++i) {
        free_CV(arr[i]);
    }
    free(arr);

    return 0;
}
