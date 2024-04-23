//vedad3
#include <iostream>
#include <climits>
#include <cstdlib>

int main() {
    int m, n;
    int suma = 0;
   
    std::cout << "unesi donju granicu intervala\n";
    std::cin >> m;
    
    std::cout << "unesi gornju granicu\n";
    std::cin >> n;

    if (m > n) {
        std::cout << "donja granica mora biti manja od gornje";
        exit (1);
    }

    
    long long int proizvod_min_max_djeljivih_sa_5 = 1;
    int min_djeljiv_s_pet = INT_MAX;
    int max_djeljiv_s_pet = INT_MIN;

    for (int i = m; i <= n; ++i) {
        if (i % 5 == 0) {
            suma += i;

            if (i < min_djeljiv_s_pet) {
                min_djeljiv_s_pet = i;
            }

            if (i > max_djeljiv_s_pet) {
                max_djeljiv_s_pet = i;
            }
        }
    }

    if (min_djeljiv_s_pet != INT_MAX && max_djeljiv_s_pet != INT_MIN) {
        proizvod_min_max_djeljivih_sa_5 = static_cast<long long>(min_djeljiv_s_pet) * max_djeljiv_s_pet;
    }

    std::cout << "zbir je " << suma << "\n";
    std::cout << "Proizvod je " << proizvod_min_max_djeljivih_sa_5 << ".";

    return 0;
}
