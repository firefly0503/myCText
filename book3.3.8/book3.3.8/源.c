#include"stdio.h"
#include"math.h"//����pow(����,ָ��)
void main()
{
	int i , m;
	int sum = 0;
	printf("�г����н����\n");
	for (i = 1; sum < 10000; i++)
	{
		m = pow(i, i);//m=i^i
		sum = sum + m; 
		printf("����Ϊ��%d, ǰ%d���Ϊ��%d\n", i , i, sum);

	}
	printf("\n");
	printf("1^1+2^2+3^3+...+n^n>10000����С������n=%d\n", i - 1);//i-1������������i����Ϊi��ʼֵΪ1
	system("pause");
}