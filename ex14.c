#include <stdio.h>
#include <ctype.h>
#include <string.h>

// forward declarations
int canPrintIt(char ch);
void printLetters(char arg[], int len);

void printArguments(int argc, char *argv[]) {
    int i = 0;
    for (i = 0; i < argc; i++) {
        int len = strlen(argv[i]);
        printLetters(argv[i], len);
    }
}

void printLetters(char arg[], int len) {
    int i = 0;
    for (i = 0; i < len; i++) {
        char ch = arg[i];
        if (canPrintIt(ch)) {
            printf("'%c' == %d ", ch, ch);
        }
    }

    printf("\n");
}

int canPrintIt(char ch) {
    return isalpha((int)ch) || isblank((int)ch);
}

int main(int argc, char *argv[]) {
    printArguments(argc, argv);
    return 0;
}
