#include"stdio.h"
void main()
{
	int i, j;
	long sum = 1, product = 0;
	printf("����ǰn��׳˵ĺ�\n");
	scanf_s("%d", &j);
	for (i = 1; i <= j; i++)
	{
		sum = i*sum;
		product += sum;
	}
	printf("%d�Ľ׳��ǣ�%ld\n", j, sum);
	printf("��1!��%d!�ĺ��ǣ�%ld\n", j, product);
	system("pause");
}