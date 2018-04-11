#ifndef __SEARCH__H
#define __SEARCH__H
/***************************** Libraries ***********************/
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/*********************** Function Prototypes *****************************/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
#endif
