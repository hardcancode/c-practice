#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fptr;
    char c, count = 1;
    fptr = fopen("data2.txt", "r");
    if (fptr == NULL)
    {
        printf("\nCannot open file \n");
        exit(0);
    }
    int m, n;
    printf("Enter M and N");
    scanf("%d", &m);
    scanf("%d", &n);
    c = fgetc(fptr);
    while (c != EOF)
    {
        if (c == '\n')
            count++;
        if (count >= m && count <= n)
            printf("%c", c);
        c = fgetc(fptr);
    }
    fclose(fptr);
}