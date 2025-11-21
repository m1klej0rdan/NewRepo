#include <iostream>


int main() {
    setlocale(LC_ALL, "RU");
    int x;
    int i;

    std::cout << "число: ";
    std::cin >> x;
    std::cout << "номер бита: ";
    std::cin >> i;
    int mask = 1;
    if (i == 1) mask = 2;
    int result = x + mask;

    std::cout << "стало: " << result << std::endl;

    return 0;
}
