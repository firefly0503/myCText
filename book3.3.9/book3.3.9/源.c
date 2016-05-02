#include"stdio.h"
void main()
{
	int i, cost = 0;
	int men = 0, women = 0, children = 0;
	printf("列出所有情况：\n");
	for (men = 0; men <= 30; men++)//实现men的自增
	{
		cost = 3 * men + 2 * women + (30 - men - women);// 直接使用 children = 30 - men - women 减少变量
		children = 30 - men - women;//通过已知条件反推children
		if (cost == 50) printf("男人：%d,   女人： %d,   孩子：%d\n", men, women, children);
		for (women = 0; women <= 30; women++)//当m分别等于1~30时，再进行30×30次的计算，求women
		{
			cost = 3 * men + 2 * women + (30 - men - women);
			children = 30 - men - women;
			if (cost == 50) printf("男人：%d,   女人： %d,   孩子：%d\n", men, women, children);
		}
	}
	system("pause");
}