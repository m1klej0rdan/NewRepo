#include <iostream>
#include "string_utils.h"

int main() {
    char str1[100];
    char str2[100];

    std::cout << "stroka 1: ";
    std::cin.getline(str1, 100);
    std::cout << "stroka 2: ";
    std::cin.getline(str2, 100);

    if (str1[0] == '\0' || str2[0] == '\0') {
        std::cout << "error " << std::endl;
        return 1;
    }

    size_t len1 = StringUtils::string_length(str1);
    size_t len2 = StringUtils::string_length(str2);

    char* concat = StringUtils::string_concat(str1, str2); // сложение строк
    char* copy1 = StringUtils::string_copy(str1);
    char* copy2 = StringUtils::string_copy(str2);

    StringUtils::string_reverse(copy1); 
    StringUtils::string_reverse(copy2); 

    std::cout << "length 1: " << len1 << std::endl;
    std::cout << "length 2: " << len2 << std::endl;
    std::cout << "sum: " << concat << std::endl;
    std::cout << "reverse 1: " << copy1 << std::endl;
    std::cout << "reverse 2: " << copy2 << std::endl;

    delete[] concat;
    delete[] copy1;
    delete[] copy2;

    return 0;
}