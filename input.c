#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024 // 1KB

void strcopy(char *src, char *dst, int srclength, int *dstfrom)
{
    for (int i = 0; i < srclength; i++)
    {
        dst[(*dstfrom)++] = src[i];
    }
}

char *scan()
{
    char *buff = malloc(sizeof(char) * BUFFER_SIZE);
    size_t allocated = sizeof(char) * BUFFER_SIZE;
    char *text = malloc(allocated);
    size_t length = 0;
    int b;
    while ((b = read(STDIN_FILENO, buff, BUFFER_SIZE)) > 0)
    {
        if (length >= allocated)
        {
            allocated += allocated;
            text = realloc(text, allocated);
        }
        if (buff[b - 1] == '\n') {
            strcopy(buff, text, b - 1, (int*) &length); // Does not copy the new line character
            break;
        }
        strcopy(buff, text, b, (int*) &length);
    }
    free(buff);
    text = realloc(text, length);
    text[length] = '\0';
    return text;
}

char *input(char *message)
{
    printf("%s", message);
    fflush(stdout);
    return scan();
}