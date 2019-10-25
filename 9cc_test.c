#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        fprintf(stderr, "引数の個数が正しくありません\n");
        return 1;
    }

    char *p = argv[1];

    // printf("%s\n", argv[0]);
    // printf("%s\n", argv[1]);

    printf("値は%s\n", p);

    while (*p)
    {
        printf("%s\n", p);
        p++;
    }
}