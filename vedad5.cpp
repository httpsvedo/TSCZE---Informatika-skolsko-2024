//vedad5
#include <iostream>

int main() {
    std::string rijec;
    // init brojace
    int brojSamoglasnika = 0;
    int brojSuglasnika = 0;

    std::cout << "unesi rijec ";
    std::cin >> rijec;

    

    for (char znak : rijec) {
        // convertanje u lCASE
        char lowercaseZnak = (znak >= 'A' && znak <= 'Z') ? (znak - 'A' + 'a') : znak;

        //slovocheck
        if ((lowercaseZnak >= 'a' && lowercaseZnak <= 'z')) {
            // samoglasnik check
            if (lowercaseZnak == 'a' || lowercaseZnak == 'e' || lowercaseZnak == 'i' ||
                lowercaseZnak == 'o' || lowercaseZnak == 'u') {
                brojSamoglasnika++;
            } else {
                brojSuglasnika++;
            }
        }
    }

    std::cout << "samoglasnici " << brojSamoglasnika;
    std::cout << "\nsuglasnici " << brojSuglasnika;

    return 0;
}