#include "Strend.h"

int strend(const char *s, const char *t) { // Функция проверки, если ли строка t в конце строки s
    int end_s = 0, end_t = 0; // Переменные для поиска конца строк
    while (s[end_s] != '\0') end_s++; // Ищем конец первой строки
    while (t[end_t] != '\0') end_t++; // Ищем конец второй строки
    while (end_t >= 0 && end_s >= 0) { // Идём с конца к началу, попутно проверяя, что символы в строках одинаковы
        if (s[end_s] != t[end_t]) return 0; // Если символы различны -> t не стоит в конце s
        end_s--;
        end_t--;
    }
    if (end_t != -1) return 0; // Не дошли до конца t -> t не стоит в конце s
    return 1; // Всё ок -> return 1
}