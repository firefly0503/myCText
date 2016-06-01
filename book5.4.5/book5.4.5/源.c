#include"stdio.h"
long double factorial(int i)
{
	long double fact;
	for (fact = 1; i > 0; i--)
		fact = fact*i;
	return fact;
}

long double factSum(int n)
{
	int i = 1;
	long double sum = 0;
	for (i = 1; i <= n; i++)
		sum += 1.0 / factorial(i);
	return sum;
}

void main()
{
	int n;
	long double result;
	printf("¼ÆËã1/1!+1/2!+1/3!+...+1/n!µÄÖµ\n");
	printf("In put n: ");
	scanf_s("%d", &n);
	result = factSum(n);
	printf("The answer is = %lf\n", result);
	system("pause");
}