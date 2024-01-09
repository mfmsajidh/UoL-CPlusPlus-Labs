#include <iostream>
using namespace std;

void displayMessage(string message) {
        cout << message << endl;
}

int main(int argc, char *argv[]) {
    displayMessage(argv[1]);

    return 0;
}