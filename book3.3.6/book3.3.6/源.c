#include"stdio.h"
#include"math.h"
void main()
{
	int i;
	double a, sqrt1, sqrt2, value = 1;//value为差值，题目要求小于0.00001
	printf("计算√a的值，a=");
	scanf_s("%lf", &a);
	sqrt1 = a;
	sqrt2 = a;
	for (i = 1; value >= 0.000001; i++)
	{
		sqrt1 = sqrt2;
		sqrt2 = (sqrt2 + a / sqrt2) / 2;
		value = fabs(sqrt1 - sqrt2);
	}
	printf("√%lf=%lf\n", a, sqrt2);
	system("pause");
}