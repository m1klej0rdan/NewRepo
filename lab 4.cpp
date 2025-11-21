#include <iostream>

int main() {
    int N;
    std::cin >> N;
    int count = 0;
    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            std::cout << i << " ";
            count = count + 1;
            if (count >= 1000) {
                std::cout << "Too many divisors";
                break;
            }
        }
    }

    return 0;
}