#include <stdio.h>
#include <stdlib.h>


int maxDivide(int a, int b)
{
	while (a % b == 0)
		a = a / b;
	return a;
}

int isUgly(int no)
{
	no = maxDivide(no, 2);
	no = maxDivide(no, 3);
	no = maxDivide(no, 5);

	return (no == 1) ? 1 : 0;
}

int countPrimes(int a[], int size)
{
    int numberPrime = 0;
    int i = 0;
    for (int j = 2; j < a[i]; j++)
    {
        if(a[i] % j == 0)
            numbPrime++;
    }
    return numPrime;
}
int getNthUglyNo(int n)
{
	
	int i = 1;
	
	int count = 1;

	while (n > count) {
		i++;
		if (isUgly(i))
			count++;
	}
	return i;
}

int main()
{
	

  int n;
  int a[n];
  int i=0;
  while(i!=n)
  {
    unsigned no = getNthUglyNo(i+1);
    a[i]=no;
  }
  	
	getchar();
	return 0;
}