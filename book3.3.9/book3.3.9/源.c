#include"stdio.h"
void main()
{
	int i, cost = 0;
	int men = 0, women = 0, children = 0;
	printf("�г����������\n");
	for (men = 0; men <= 30; men++)//ʵ��men������
	{
		cost = 3 * men + 2 * women + (30 - men - women);// ֱ��ʹ�� children = 30 - men - women ���ٱ���
		children = 30 - men - women;//ͨ����֪��������children
		if (cost == 50) printf("���ˣ�%d,   Ů�ˣ� %d,   ���ӣ�%d\n", men, women, children);
		for (women = 0; women <= 30; women++)//��m�ֱ����1~30ʱ���ٽ���30��30�εļ��㣬��women
		{
			cost = 3 * men + 2 * women + (30 - men - women);
			children = 30 - men - women;
			if (cost == 50) printf("���ˣ�%d,   Ů�ˣ� %d,   ���ӣ�%d\n", men, women, children);
		}
	}
	system("pause");
}