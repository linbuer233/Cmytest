#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char str[128];
    if((fp=fopen("test.txt","w"))==NULL)
    {
        printf("cannot open file");
        return 0;
    }
    while(scanf("%s",str)!=EOF)//����cirl+z������
    {
        fputs(str,fp);//д���ַ���
        fputs("\n",fp);//д�밴enter��
    }
    fclose(fp);
    return 0;
}