#include <stdio.h>

int main(int argc, char *argv[]) {
    int areas[] = { 10, 12, 13, 14, 20};
    char name[] = "Kevin";
    char fullName[] = {
        'K', 'e', 'v', 'i', 'n',
        ' ',
        'P', 'a', 'r', 'r', 'o', 't', 't', '\0'
    };

    printf("The size of an int: %ld\n", sizeof(int));
    printf("The size of areas (int[]): %ld\n", sizeof(areas));
    printf("The nubmer of ints in areas: %ld\n", sizeof(areas) / sizeof(int));
    printf("The first area is %d, the 2nd %d.\n", areas[0], areas[1]);
    printf("The size of a char: %ld\n", sizeof(char));
    printf("The size of name (char[]): %ld.\n", sizeof(name));
    printf("The number of chars: %ld\n", sizeof(name) / sizeof(char));
    printf("The size of fullName (char[]): %ld\n", sizeof(fullName));
    printf("The number of chars: %ld\n", sizeof(fullName) / sizeof(char));
    printf("name=\"%s\" and fullName=\"%s\"\n", name, fullName);

    return 0;
}
