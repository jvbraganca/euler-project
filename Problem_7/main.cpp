#include <iostream>

bool checkIfIsDivisible(int dividend, int divider) {
    return (dividend % divider == 0);
}

bool checkIfIsPrime(int number) {
    for (int index = 2; index < number; index++) {
        if (checkIfIsDivisible(number, index)) return false;
    }
    return true;
}

int main() {
    int index = 1;
    int number = 2;
    bool keepGoing = true;
    while (keepGoing) {
        if (checkIfIsPrime(number)) {
            std::cout << index << ": " << number << std::endl;
            index++;
            number++;
        } else number++;
        if (index == 10002) keepGoing = false;
    }
    return 0;
}
