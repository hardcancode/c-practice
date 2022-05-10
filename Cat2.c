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
    int i, n, sal, Eno;
    printf("Enter number of employee: ");
    scanf("%d", &n);
    FILE *fptr;
    fptr = fopen("employee.bin", "ab+");
    for (int i = 0; i < n; i++)
    {
        printf("For employee%d\nEnter name: ", i + 1);
        scanf("%s", obj.name);
        printf("Enter Emp ID: ");
        scanf("%d", &obj.empno);
        printf("Enter Salary: ");
        scanf("%f", &obj.sal);
        fwrite(&obj, sizeof(struct Employee), 1, fptr);
    }
    fclose(fptr);
    // reading to check
    fptr = fopen("employee.bin", "rb");
    while (fread(&obj, sizeof(struct Employee), 1, fptr))
    {
        printf("Name: %s\n", obj.name);
        printf("Emp No: %d\n", obj.empno);
        printf("Salary: %f\n", obj.sal);
    }
    fclose(fptr);
    return 0;
}