//
// Created by 1 on 16.04.2023.
//

#include "input_int.h"

int input_int() { // функция ввода целого числа с проверками
    int output = 0, err = 0;
    char temp;
    int minus = 0;

    while ((temp = getchar()) != '\n') { // проверка на переход на новую строку
        if (!minus && temp == '-' && output == 0) {// проверка на минус
            minus = 1;
        } else if (temp >= '0' && temp <= '9') { // проверка что символ является числом
            output = output * 10 + temp - '0';
        } else err++;
    }

    if (err)
        printf("Error: Check the input, %d errors detected\n", err); // сообщим пользователю о найденных ошибках
    if (minus) // учёт знака
        return -output;
    else return output;
}