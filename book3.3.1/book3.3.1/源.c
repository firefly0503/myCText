#include<stdio.h>
void main()
{
	char c1, c2;
	c1 = getchar();
	c2 = getchar();
	putchar(c1);
	putchar(c2);
	printf("%d,%d\n", c1, c2);
	system("pause");
}