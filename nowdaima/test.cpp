#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main()
{
	int a, n, i;
	char s[80][80];
	FILE *fp, *fin;
	int t = 0, d = 79; //定义随机数选取的范围
	srand(time(NULL)); //初始化随机数种子

	fp = fopen("list.txt", "r"); //打开存有学生名单的文件list.txt
	if (!fp)
	{
		printf("cannot open the flie");
		exit(0);
	}

	fin = fopen("lucky.txt", "w"); //创建一个存放抽查学生的文件lucky.txt
	if (!fin)
	{
		printf("cannot open the flie");
		exit(0);
	}
	for (i = 0; i < 80; i++) //读取list.txt里的学生名单存进数组中
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
		if (n == -1) //当输入-1时结束程序
			break;
		for (i = 1; i <= n; i++)
		{
			a = rand() % (d - t) + t; //生成一个[t,d)区间的的随机数
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
			fprintf(fin, "%s", s[a]); //把抽到的学生写入lucky.txt文件
		}
		printf("\n");
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	} while (1);

	fclose(fp);
	fclose(fin);
	return 0;
}