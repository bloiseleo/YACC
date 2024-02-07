#include "input.h"
#include "messages.h"
#include <stdio.h>

const char operations[4] = { '+', '-', '*', '/' };

int executeOperation(int o1, int o2, int operator) {
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
    int operand1 = operand("Type an operand:\n");
    int operand2 = operand("Type an operand:\n");
    int r = executeOperation(operand1, operand2, operator);
    printResult(r);
}