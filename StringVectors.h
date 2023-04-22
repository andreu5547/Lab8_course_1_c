#include <stdio.h>
#include <stdlib.h>

#ifndef STRINGVECTORS_H
#define STRINGVECTORS_H


typedef struct CVector CVector;

CVector *init_cvector(int n);

CVector *input_cvector();

void print_cvector(CVector *ve);

void free_CV(CVector *ve);

char *give_string(CVector *ve);

void quickSortHoaraCVecrorByLen(CVector **arr, int start, int end);

#endif //STRINGVECTORS_H
