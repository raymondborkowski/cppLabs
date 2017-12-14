#include <iostream>
#include <string>

using namespace std;

int powerLoop(int x, unsigned int y) {
    int result = 1;
    while (y) {
        result *= x;
        y--;
    }
    return result;
}

int powerRecursion(int x, unsigned int y) {
    if (y == 0) return 1;
    return x * powerRecursion(x, y-1);
}

int powerTailRecursionHelper(int x, unsigned int y, int result) {
    if (y == 0) return result;
    result *= x;
    return powerTailRecursionHelper(x, y-1, result);
}

int powerTailRecursion(int x, unsigned int y) {
    return powerTailRecursionHelper(x, y, 1);
}

int main() {
    cout << powerLoop(2, 8) << endl;
    cout << powerRecursion(2, 8) << endl;
    cout << powerTailRecursion(2, 8) << endl;
    
    return 0;
}




