#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for(int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int is_number(const char *str) {
    for(int i = 0; str[i] != '\0'; i++) {
        if(!isdigit(str[i]))
            return 0;
    }
    return 1;
}

int main() {
    char input[20];
    int n;

    printf("Введите целое неотрицательное число (0-20): ");
    scanf("%19s", input);

    if(!is_number(input)) {
        printf("Ошибка: введено не число.\n");
        return 1;
    }

    n = atoi(input);

    if(n < 0 || n > 20) {
        printf("Ошибка: число должно быть от 0 до 20.\n");
        return 1;
    }

    printf("Факториал числа %d = %llu\n", n, factorial(n));

    return 0;
}