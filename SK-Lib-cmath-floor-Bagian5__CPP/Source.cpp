#include <cmath>
#include <iostream>
#include <conio.h>

int main() {
    std::cout << std::fixed
        << "floor(+2.7) = " << std::floor(+2.7) << '\n'
        << "floor(-2.7) = " << std::floor(-2.7) << '\n'
        << "floor(-0.0) = " << std::floor(-0.0) << '\n'
        << "floor(-Inf) = " << std::floor(-INFINITY) << '\n';

    _getch();
    return 0;
}