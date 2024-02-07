#include <stdio.h>
#include "input.h"
#include <string.h>
#include <stdlib.h>
#define PREFIX "//========"

#define RESULT_TEMPLATE_MESSAGE "The result is %.2f"

void prefixPrint(char* s) {
    printf("%s%s\n", PREFIX, s);
}

void println(char* s) {
    printf("%s\n", s);
    fflush(stdout);
}

int list(const char* options, int length) {
    char* str = malloc(sizeof(char) * (length * 6) + 1 ); // For each option, we will have 6 bytes. In the end of string, we will have the terminator.
    int strl = 0;
    for (int i = 0; i < length; i++) {
        char buff[7] = ""; // We will have 6 bytes for buffering option label + terminator.
        sprintf(buff, "%d - %c\n", (i + 1), options[i]);
        strcopy(buff, str, 6, &strl);
    }
    int selected = -1;
    while (selected == -1) {
        char* option = input(str);
        selected = atoi(option);
        if(selected < 1 || selected > length ) {
            println("Invalid option! Select a valid one");
            selected = -1;
        }
    }
    selected--;
    free(str);
    return selected;
}

int operand(char* message) {
    int v = 0;
    char* i = input(message);
    v = atoi(i);
    return v;
}

void printResult(float r) {
    char* buff = malloc(sizeof(char) * strlen(RESULT_TEMPLATE_MESSAGE));
    sprintf(buff, RESULT_TEMPLATE_MESSAGE, r);
    println(buff);
    free(buff);
}