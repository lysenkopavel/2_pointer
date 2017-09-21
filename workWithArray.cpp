#include <iostream>
#include "header.h"

using namespace std;

int *setArray(int l, int *array) {
    srand(time(NULL));
    for (int i = 0; i < l; ++i) {
        array[i] = rand() % 100;
    }
    return array;
}

void printArray(int l, int *array) {
    for (int i = 0; i < l; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void swap(int *index1, int *index2){
    int c;
    c = *index1;
    index1 = index2;
    *index2 = c;
}

