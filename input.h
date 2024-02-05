/**
 * BUFFER_SIZE determines the size of the buffer used by input to handle input characters.
*/
#define BUFFER_SIZE
/**
 * Copy SRC string of SRCLENGTH characters to DST string from DSTFROM
*/
void strcopy(char* src, char* dst, int srclength, int* dstfrom);
/**
 * Propmts a given MESSAGE into STDIN and returns the pointer to the INPUT provided in STDIN.
 * It accepts a string of N syze and does not converts it.
*/
char* input(char* message);