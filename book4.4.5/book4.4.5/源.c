#include "stdio.h"
#include "string.h"
main()
{
	char s1[50], s2[10];
	char *ps1, *ps2, *pc;
	int i, m;
	ps1 = s1;
	ps2 = s2;
	printf("ÇëÊäÈë×Ö·û´®s1\n");
	gets(s1);
	printf("ÇëÊäÈë×Ö·û´®s2\n");
	gets(s2);
	printf("\ns1 :%s", s1);
	printf("\ns2 :%s", s2);
	while (*ps1 != '\0')
	{
		ps2 = s2;
		while (*ps2 != '\0')
		{
			if (*ps2 == *ps1)
			{
				pc = ps1;
				while (*pc != '\0')
				{
					*pc = *(pc + 1); pc++;
				}
			}
			else ps2++;
		}
		ps1++;
	}
	printf("\nÉ¾³ý×Ö·û´®s2ÖÐµÄ×Ö·ûºóµÄs1 :%s\n", s1);
	system("pause");
}
