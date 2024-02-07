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
int list(const char* options, int length);
/**
 * Print a given MESSAGE to receive an operand to operate on.
*/
int operand();
/**
 * Print Result from a given template defined RESULT_TEMPLATE_MESSAGE.
 * If the user does not define, the default will be used.
*/
void printResult(float r);