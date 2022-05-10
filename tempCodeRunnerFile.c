#include <stdio.h>
#include <stdlib.h>
//main function
int main()
{

    FILE *fptr;
    // as already on first line 
    char c, count = 1; 
    int m, n;
     // reading from already created file
    fptr = fopen("data2.txt", "r");
    if (fptr == NULL)
    {
        // if file not found
        printf("\nCannot open file \n"); 
        exit(0);
    }
    printf("Enter M:");
    // for start line
    scanf("%d", &m); 
    printf("Enter N:");
    // for end line
    scanf("%d", &n); 
    if (m < 1 || n < 1)
    {
        printf("\nInvalid input\n");
        exit(0);
    }
    c = fgetc(fptr);
    while (c != EOF)
    {
        if (c == '\n')
            count++; // counting number of lines
        if (count >= m && count <= n)
            printf("%c", c);
        c = fgetc(fptr); // reading char by char from file
    }
    if (count < m || count < n)
        printf("\nonly %d lines are there in the file\n", count);
    fclose(fptr);
}