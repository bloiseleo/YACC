/**
 * Prefix that will be prepended in each string printed by this library
*/
#define PREFIX
/**
 * Print a given string with the PREFIX prepended
*/
void prefixPrint(char* s);
/**
 * Print a given string with new line appended at the end of it
*/
void println(char* s);
/**
 * Print a given list with all the options and return the option selected
*/
int list(char* options, int length);
/**
 * Print a given MESSAGE to receive an operand to operate on.
*/
int operand();