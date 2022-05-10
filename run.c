#include <stdio.h>
#include <stdlib.h>
struct Employee
{
    char name[20];
    int empno;
    float sal;
};
typedef struct Employee emp;
int main()
{
    emp obj;
    char name[50];
    int i, n, sal, Eno;
    printf("Enter number of employee: ");
    scanf("%d", &n);
    FILE *fptr;
    fptr = fopen("employee1.bin", "ab+");
    if (fptr == NULL)
    {
        printf("Error!");
        exit(0);
    }
    for (int i = 0; i < n; i++)
    {
        printf("For employee%d\nEnter name: ", i + 1);
        scanf("%s", obj.name);
        printf("Enter Emp ID: ");
        scanf("%d", &obj.empno);
        printf("Enter Salary: ");
        scanf("%f", &obj.sal);

        fwrite(&obj, sizeof(struct Employee), 1, fptr);
        if (&fwrite != 0)
            printf("Contents to file written successfully !\n");
        else
            printf("Error writing file !\n");
    }
    fclose(fptr);
    // reading to check
    fptr = fopen("employee1.bin", "rb");
    if (fptr == NULL)
    {
        printf("Error!");
        exit(0);
    }
    printf("Now reading the generated Binary file and \n printing the output from the binary file ");
    while (fread(&obj, sizeof(struct Employee), 1, fptr))
    {
        printf("Name: %s\n", obj.name);
        printf("Emp No: %d\n", obj.empno);
        printf("Salary: %f\n", obj.sal);
    }

    return 0;
}