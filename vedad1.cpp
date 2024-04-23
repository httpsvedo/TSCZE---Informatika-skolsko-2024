//vedad1
#include <iostream>
#include <cstdlib>

int main() {
    unsigned long long int n, fact, i=1;
    std::cout << "unesi prirodan broj manji od 21\n";
    std::cin >> n;
    
    if (n<1 || n>100) {
        std::cout << "broj mora biti prirodan i manji od 101 (1<=n<=100)";
        std::exit(1);
    }
    
    fact = i;
    
    for (i=1 ; i<=n ; i++) {
        fact = fact*i; 
        }

        std::cout << fact;
return 0;
}