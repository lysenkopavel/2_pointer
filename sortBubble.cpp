#include <iostream>
#include "header.h"
//#include <algorithm>

using namespace std;

void sortBubble(int l, int *array) {

    for (int i = 0; i < l - 1; ++i) {
        for (int j = 0; j < l - i - 1; ++j) {
            if (array[j + 1] > array[j]) {
                swap(array[j + 1], array[j]);
            }
        }
    }
}

void sortBubble2(int l, int *array) {

    for (int i = 0; i < l - 1; ++i) {
        for (int j = 0; j < l - i - 1; ++j) {
            if (*(array + j + 1) > *(array + j)) {
                swap(*(array + j + 1), *(array + j));
            }
        }
    }
}