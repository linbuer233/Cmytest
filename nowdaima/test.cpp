#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main()
{
	int a, n, i;
	char s[80][80];
	FILE *fp, *fin;
	int t = 0, d = 79; //���������ѡȡ�ķ�Χ
	srand(time(NULL)); //��ʼ�����������

	fp = fopen("list.txt", "r"); //�򿪴���ѧ���������ļ�list.txt
	if (!fp)
	{
		printf("cannot open the flie");
		exit(0);
	}

	fin = fopen("lucky.txt", "w"); //����һ����ų��ѧ�����ļ�lucky.txt
	if (!fin)
	{
		printf("cannot open the flie");
		exit(0);
	}
	for (i = 0; i < 80; i++) //��ȡlist.txt���ѧ���������������
	{
		char m[80];
		fgets(m, 80, fp);
		strcpy(s[i], m);
	}
	int ra[80];
	int j,k=0;
	do
	{
		scanf("%d", &n);
		if (n == -1) //������-1ʱ��������
			break;
		for (i = 1; i <= n; i++)
		{
			a = rand() % (d - t) + t; //����һ��[t,d)����ĵ������
			ra[k++] = a;
			if (k != 0)
				for (j = 0; j <= k; j++)
					if (a == ra[j])
					{
						a = rand() % (d - t) + t;
						continue;
					}
					else
					break;
			printf("%s", s[a]);
			fprintf(fin, "%s", s[a]); //�ѳ鵽��ѧ��д��lucky.txt�ļ�
		}
		printf("\n");
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	} while (1);

	fclose(fp);
	fclose(fin);
	return 0;
}