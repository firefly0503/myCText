#include"stdio.h"
void main()
{
	int i, j, k;
	double max, min;
	double a[7], b[7], c[7], d[7], e[7];
	double score[7];
	for (i = 0, j = 1; i < 7; i++)//��ʼ�����1λѧ��
	{
		if (i == 0)
		{
			printf("�����%d��ͬѧ��ѧ�ţ�", j);
			scanf_s("%lf", &a[0]);//[0]����Ϊѧ��
			i++;
		}
		printf("�����%d��ͬѧ�ĵ�%d�ſγ̳ɼ���", j, i);
		scanf_s("%lf", &a[i]);
	}
	for (i = 0, j = 2; i < 7; i++)//��ʼ�����2λѧ��
	{
		if (i == 0)
		{
			printf("�����%d��ͬѧ��ѧ�ţ�", j);
			scanf_s("%lf", &b[0]);//[0]����Ϊѧ��
			i++;
		}
		printf("�����%d��ͬѧ�ĵ�%d�ſγ̳ɼ���", j, i);
		scanf_s("%lf", &b[i]);
	}
	for (i = 0, j = 3; i < 7; i++)//��ʼ�����3λѧ��
	{
		if (i == 0)
		{
			printf("�����%d��ͬѧ��ѧ�ţ�", j);
			scanf_s("%lf", &c[0]);//[0]����Ϊѧ��
			i++;
		}
		printf("�����%d��ͬѧ�ĵ�%d�ſγ̳ɼ���", j, i);
		scanf_s("%lf", &c[i]);
	}
	for (i = 0, j = 4; i < 7; i++)//��ʼ�����4λѧ��
	{
		if (i == 0)
		{
			printf("�����%d��ͬѧ��ѧ�ţ�", j);
			scanf_s("%lf", &d[0]);//[0]����Ϊѧ��
			i++;
		}
		printf("�����%d��ͬѧ�ĵ�%d�ſγ̳ɼ���", j, i);
		scanf_s("%lf", &d[i]);
	}
	for (i = 0, j = 5; i < 7; i++)//��ʼ�����5λѧ��
	{
		if (i == 0)
		{
			printf("�����%d��ͬѧ��ѧ�ţ�", j);
			scanf_s("%lf", &e[0]);//[0]����Ϊѧ��
			i++;
		}
		printf("�����%d��ͬѧ�ĵ�%d�ſγ̳ɼ���", j, i);
		scanf_s("%lf", &e[i]);
	}
	printf("\n");//����
	//����Ϊֹ���������ݽ����������ܳɼ���ƽ����
	score[1] = a[1] + a[2] + a[3] + a[4] + a[5] + a[6];//�ܳɼ��ļ���
	score[2] = b[1] + b[2] + b[3] + b[4] + b[5] + b[6];
	score[3] = c[1] + c[2] + c[3] + c[4] + c[5] + c[6];
	score[4] = d[1] + d[2] + d[3] + d[4] + d[5] + d[6];
	score[5] = e[1] + e[2] + e[3] + e[4] + e[5] + e[6];
	printf("��1λͬѧ���ܳɼ���%lf��  ƽ���ɼ���%lf\n", score[1], score[1] / 6);//�ܳɼ���ƽ���ɼ������
	printf("��2λͬѧ���ܳɼ���%lf��  ƽ���ɼ���%lf\n", score[2], score[2] / 6);
	printf("��3λͬѧ���ܳɼ���%lf��  ƽ���ɼ���%lf\n", score[3], score[3] / 6);
	printf("��4λͬѧ���ܳɼ���%lf��  ƽ���ɼ���%lf\n", score[4], score[4] / 6);
	printf("��5λͬѧ���ܳɼ���%lf��  ƽ���ɼ���%lf\n", score[5], score[5] / 6);
	printf("\n");
	//����Ϊֹ����ʼ�Ƚϣ�������Ƴɼ������
	for (k = 1; k < 7; k++)//��i�ſγ̳ɼ����ѧ����ѧ��
	{
		max = a[k];
		min = a[k];
		if (b[k] < min) min = b[k];
		else if (b[k] > max) max = b[k];
		if (c[k] < min) min = c[k];
		else if (c[k] > max) max = c[k];
		if (d[k] < min) min = d[k];
		else if (d[k] > max) max = d[k];
		if (e[k] < min) min = e[k];
		else if (e[k] > max) max = e[k];
		if (max == a[1]) printf("��%d�ſγ̳ɼ���߷��ǣ�%lf����ѧ��ѧ�ţ�%lf\n", k, max, a[0]);
		if (max == b[1]) printf("��%d�ſγ̳ɼ���߷��ǣ�%lf����ѧ��ѧ�ţ�%lf\n", k, max, b[0]);
		if (max == c[1]) printf("��%d�ſγ̳ɼ���߷��ǣ�%lf����ѧ��ѧ�ţ�%lf\n", k, max, c[0]);
		if (max == d[1]) printf("��%d�ſγ̳ɼ���߷��ǣ�%lf����ѧ��ѧ�ţ�%lf\n", k, max, d[0]);
		if (max == e[1]) printf("��%d�ſγ̳ɼ���߷��ǣ�%lf����ѧ��ѧ�ţ�%lf\n", k, max, e[0]);
	}
	system("pause");
}