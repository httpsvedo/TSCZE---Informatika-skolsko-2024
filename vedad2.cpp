//vedad2
#include <iostream>
#include <cstdlib>

int main() {
    int x, y;
    std::cout << "Unijeti dva cijela broja u intervalu (-30000, 30000)\n\n";
    std::cin >> x >> y;
    
    if (x < -30000 || x > 30000 || y < -30000 || y > 30000) {
        std::cout << "brojevi moraju biti u definisanom intervalu (-30000, 30000)\n\n";
        std::exit(1);
    }
    
    if (x>y) {
        std::cout << "max = " << x << ", min = " << y;
    }   else
    if (x<y) {
        std::cout << "max = " << y << ", min = " << x;
    }   else 
    if (x==y) {
        std::cout << "brojevi su jednaki";
    }


return 0;
}
