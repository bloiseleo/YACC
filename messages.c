#include <stdio.h>
#include "input.h"
#include <string.h>
#include <stdlib.h>
#define PREFIX "//========"

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

float operand(char* message) {
    float v = 0;
    char* i = input(message);
    v = atof(i);
    return v;
}

void printResult(float r) {
    int ri = (int) r;
    char* t = "The result is %.2f";
    if (ri == r) {
        t = "The result is %d";
    }
    char* buff = malloc(sizeof(char) * strlen(t));
    if (ri == r) {
        sprintf(buff, t, ri);
    } else {
        sprintf(buff, t, r);
    }
    println(buff);
    free(buff);
}