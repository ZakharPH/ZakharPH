#include <string>
#include <iostream>

int main() {
    std::string a;
    std::cin >> a;
    int c = a.length();
    bool d = true;

    for (int i = 0; i < c / 2; i++) {
        if (a[i] != a[c - 1 - i]) {
            d = false;
        }
    }

    if (d) {
        std::cout << "палиндром";
    } else {
        std::cout << "не палиндром";
    }

    return 0;
}
