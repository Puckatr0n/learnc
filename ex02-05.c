#include<stdio.h>
#include<string.h>
int main(void)
{
    char buffer[256];

    printf( "Enter your name and press <Enter>:\n");
    scanf("%s", &buffer);

    printf(" You name has %d characters and/or spaces!",
        strlen(buffer));
    return 0;
}