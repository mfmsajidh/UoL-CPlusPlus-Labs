#include <iostream>
#include <algorithm>
using namespace std;

int findIndex(int findInArray[], int elementInArray) {
    cout << elementInArray << endl;
    // Should hardcode the length of the array because when you pass an array as a parameter to a function, it gets passed as a reference
    for (int i = 0; i < sizeof(findInArray)/sizeof(findInArray[0]); i++) {
        cout << i << endl;
        if (findInArray[i] == elementInArray) {
            return i;
        }
    }

    return -1;
}

int main(int argc, char *argv[]) {

    int array[] = {100, 101, 102, 103};
    int valueToFind = 102;

    int result = findIndex(array, valueToFind);

    cout << result << endl;

    if (result != -1) {
        cout << "The index of " <<  valueToFind << " is " << result << endl;
    } else {
        cout << "Element not found in array" << endl;
    }

    return 0;
}