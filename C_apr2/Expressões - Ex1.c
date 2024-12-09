//1. Qual o resultado das expressões?

//a) 1 > 3 False
#include <stdio.h>

int main() {
    int result = 1 > 3;
    printf("1 > 3: %d\n", result);
    return 0;
}

//b) 'a ' < 'b ' True
#include <stdio.h>

int main() {
    int result = 'a ' < 'b ';
    printf("'a ' < 'b ': %d\n", result);
    return 0;
}

//c) 'a ' < 'B ' False
#include <stdio.h>

int main() {
    int result = 'a ' < 'B ';
    printf("'a ' < 'B ': %d\n", result);
    return 0;
}

//d) 'j ' != 'j ' False
#include <stdio.h>

int main() {
    int result = 'j ' != 'j ';
    printf("'j ' != 'j ': %d\n", result);
    return 0;
}

//e) 1 + 0 == 0 + 1 True
#include <stdio.h>

int main() {
    int result = 1 + 0 == 0 + 1;
    printf("1 + 0 == 0 + 1: %d\n", result);
    return 0;
}

//f) 1 + (0 != 0) + (1 < 3)      2
#include <stdio.h>

int main() {
    int result = 1 + (0 != 0) + (1 < 3);
    printf("1 + (0 != 0) + (1 < 3): %d\n", result);
    return 0;
}

