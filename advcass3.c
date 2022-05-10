#include <stdio.h>
int main() {
	char name[50];
	int marks,i,n,sal;
	printf("Enter number of employee: ");
	scanf("%d",&n);
	FILE *fptr;
	fptr=(fopen("employ.bin","rb+"));
	if(fptr==NULL) {
		printf("Error!");
		exit(1);
	}
	for (i=0;i<n;++i) {
		printf("For employee%d\nEnter name: ",i+1);
		scanf("%s",name);
		printf("Enter Emp ID: ");
		scanf("%d",&marks);
		printf("Enter Salary: ");
		scanf("%d",&sal);
		fprintf(fptr,"\nName: %s \nMarks=%d \nSalary=%d",name,marks,sal);
	}
	fclose(fptr);
	return 0;
}