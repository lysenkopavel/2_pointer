#include <iostream>
#include "header.h"
//#include <algorithm>

using namespace std;

void sortQuick(int l, int r, int *array) {
    int p;
    int left = l, right = r;
//    p = array[(right - left) % 2 + left];
    p = findSupportingElement(array[left], array[(right - left) % 2 + left], array[right]);
    while (left <= right) {
        while (array[left] < p) {
            left++;
        }
        while (array[right] > p) {
            right--;
        }
        if (left <= right) {
            swap(array[left++], array[right--]);
        }
    }
    if (l < right) {
        sortQuick(l, right, array);
    }
    if (r > left) {
        sortQuick(left, r, array);
    }

}

int findSupportingElement(int a, int b, int c) {
    if ((b < a < c) || (c < a < b)) {
        return a;
    }
    if ((a < b < c) || (c < b < a)) {
        return b;
    }
    if ((a < c < b) || (b < c < a)) {
        return c;
    }
}

void sortQuick2(int l, int r, int *array) {
    int p;
    int left = l, right = r;
    p = findSupportingElement(*(array + left), *(array + (right - left) % 2 + left), *(array + right));
    while (left <= right) {
        while (*(array + left) < p) {
            left++;
        }
        while (*(array + right) > p) {
            right--;
        }
        if (left <= right) {
            swap(*(array + left), *(array + right));
            left = left + 1;
            right = right - 1;
        }
    }
    if (l < right) {
        sortQuick(l, right, array);
    }
    if (r > left) {
        sortQuick(left, r, array);
    }

}
