#include "stdio.h"
#include "string.h" //���ַ�������Ҫ�Ŀ�����
main()
{
	int i, position;
	char c, s[50];
	printf("�������ַ���: ");
	gets(s);
	printf("������Ҫ������ַ�: "); 
	fflush(stdin);
	c = getchar();
	printf("������Ҫ�����ַ���λ��(0-%d): ", strlen(s));
	scanf_s("%d", &position);
	for (i = strlen(s); i >= position&&i >= 0; i--)
	{
		s[i + 1] = s[i];
	} //s[i+1]�����ַ������һ���ַ�'\0'
	s[i + 1] = c;
	printf("�����ַ����ַ���: %s\n", s);
	system("pause");
}
