#include"stdio.h"
void main() 
{
	double pi = 1, n = 0.0, member = 2.0, denominator = 1.0;//member是分子，denominator是分母
	int i, j;
	printf("输入π的计算精度：\n");
	scanf_s("%d", &j);
	for (i = 0; i <= j; i++)
	{
		pi = pi*(member / denominator);
		member = member + 1.0;//自增运算符只能对于(int)
		denominator = denominator + 1.0;
		n = member; member = denominator; denominator = n;//分子分母互换
	}
	pi = 2 * pi;
	printf("π的值为：%lf\n", pi);
    system("pause");
}