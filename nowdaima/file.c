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
    while(scanf("%s",str)!=EOF)//输入cirl+z键结束
    {
        fputs(str,fp);//写入字符串
        fputs("\n",fp);//写入按enter键
    }
    fclose(fp);
    return 0;
}