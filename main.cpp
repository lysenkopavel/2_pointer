#include <iostream>
#include "header.h"

using namespace std;

int main() {
    int l;

    cout << "array size: ";
    cin >> l;

    //int array[l];
    int *array = new int[l];
    array = setArray(l, array);
    printArray(l, array);

//    sortBubble(l, array);
//    sortBubble2(l, array);
    sortQuick(0, l-1, array);
//    sortQuick2(0, l-1, array);

    printArray(l, array);
    delete[](array);
    return 0;
}

