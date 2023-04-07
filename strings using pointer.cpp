#include <stdio.h>

int strcompare(const char* str1, const char* str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return (*str1 - *str2);
}

int main() {
    char str1[] = "hello";
    char str2[] = "world";
    char str3[] = "hello";
    
    int result1 = strcompare(str1, str2);
    int result2 = strcompare(str1, str3);
    
    printf("strcompare(str1, str2): %d\n", result1);
    printf("strcompare(str1, str3): %d\n", result2);
    
    return 0;
}