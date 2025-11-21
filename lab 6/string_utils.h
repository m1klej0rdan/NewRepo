#ifndef STRING_UTILS_H
#define STRING_UTILS_H

namespace StringUtils {

size_t string_length(const char* str);
char* string_concat(const char* str1, const char* str2);
char* string_copy(const char* str);
void string_reverse(char* str);

}

#endif