#include"stdio.h"
void main() 
{
	double pi = 1, n = 0.0, member = 2.0, denominator = 1.0;//member�Ƿ��ӣ�denominator�Ƿ�ĸ
	int i, j;
	printf("����еļ��㾫�ȣ�\n");
	scanf_s("%d", &j);
	for (i = 0; i <= j; i++)
	{
		pi = pi*(member / denominator);
		member = member + 1.0;//���������ֻ�ܶ���(int)
		denominator = denominator + 1.0;
		n = member; member = denominator; denominator = n;//���ӷ�ĸ����
	}
	pi = 2 * pi;
	printf("�е�ֵΪ��%lf\n", pi);
    system("pause");
}