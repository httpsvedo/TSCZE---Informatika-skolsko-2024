//vedad4
#include <iostream>

int main() {
    double a, b, c;

    std::cout << "unesi duzine stranica trougla\n";
    std::cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            std::cout << "trougao je jednakostranican\n";
        } else if (a == b || b == c || a == c) {
            std::cout << "trougao je jednakokraki\n";
        } else {
            std::cout << "trougao je raznostranicni\n";
        }
    } else {
        std::cout << "trougao je nemoguce konstruisati\n";
    }

    return 0;
}
