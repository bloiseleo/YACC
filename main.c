#include "input.h"
#include "messages.h"
#include <stdio.h>

const char operations[4] = { '+', '-', '*', '/' };

float executeOperation(float o1, float o2, int operator) {
    switch (operations[operator]) {
        case '+':
            return o1 + o2;
            break;
        case '-':
            return o1 - o2;
            break;
        case '*':
            return o1 * o2;
            break;
        case '/':
            return o1 / o2;
            break;
        default:
            println("Invalid operator!");
            break;
    }
}

void end() {
    prefixPrint("Ending operations!");
    prefixPrint("Bye bye");
}

void welcome() {
    prefixPrint("Welcome to Yet another C Calculator");
    prefixPrint("By: B");
}

int displayOptions() {
    println("Which operation should we do?");
    int length = sizeof(operations) / sizeof(operations[0]);
    return list(operations, length);
}

int main() {
    welcome();
    int operator = displayOptions();
    float operand1 = operand("Type an operand:\n");
    float operand2 = operand("Type an operand:\n");
    float r = executeOperation(operand1, operand2, operator);
    printResult(r);
    end();
}