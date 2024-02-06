#include "input.h"
#include "messages.h"

void welcome()
{
    prefixPrint("Welcome to Yet another C Calculator");
    prefixPrint("By: B");
}

int displayOptions()
{
    char operations[4] = {
        '+',
        '-',
        '*',
        '/'};
    println("Which operation should we do?");
    int length = sizeof(operations) / sizeof(operations[0]);
    return list(operations, length);
}

int main()
{
    welcome();
    int selected = displayOptions();
}